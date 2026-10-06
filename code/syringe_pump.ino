// Syringe Pump
// Arduino Uno + A4988 stepper driver + NEMA 17 stepper + T8 lead screw.
//
// Set the flow rate and volume below, upload, then open the Serial Monitor
// (115200 baud) and type:
//   s  start dispensing
//   x  stop
//   r  retract the plunger back to where it started
//
// Requires the AccelStepper library (Sketch > Include Library > Manage Libraries).

#include <AccelStepper.h>
#include <math.h>

// ---------- Settings you will usually change ----------
const float FLOW_RATE_ML_PER_MIN = 1.0;   // how fast to dispense
const float VOLUME_ML            = 5.0;   // how much to dispense

// ---------- Hardware (common defaults; update if yours differ) ----------
const int STEP_PIN   = 2;
const int DIR_PIN    = 3;
const int ENABLE_PIN = 4;                  // A4988 ENABLE is active LOW

const float STEPS_PER_REV     = 200.0;     // 1.8 degree NEMA 17
const float MICROSTEPS        = 16.0;      // MS1, MS2, MS3 all HIGH on the A4988
const float LEAD_MM_PER_REV   = 8.0;       // standard T8 lead screw
const float SYRINGE_ID_MM     = 14.5;      // inner diameter of a 10 mL syringe

const float ACCELERATION      = 2000.0;    // steps/s^2, for smooth start and stop
const float RETRACT_SPEED     = 2000.0;    // steps/s

// ---------- Derived values ----------
const float STEPS_PER_MM = STEPS_PER_REV * MICROSTEPS / LEAD_MM_PER_REV;
const float ML_PER_MM    = M_PI * sq(SYRINGE_ID_MM / 2.0) / 1000.0;  // mm^3 -> mL
const float STEPS_PER_ML = STEPS_PER_MM / ML_PER_MM;

AccelStepper stepper(AccelStepper::DRIVER, STEP_PIN, DIR_PIN);

void setup() {
  Serial.begin(115200);

  stepper.setEnablePin(ENABLE_PIN);
  stepper.setPinsInverted(false, false, true);  // invert ENABLE (active LOW)
  stepper.setAcceleration(ACCELERATION);
  stepper.disableOutputs();                     // motor off until we start

  Serial.println(F("Syringe pump ready."));
  Serial.print(F("Flow rate: ")); Serial.print(FLOW_RATE_ML_PER_MIN); Serial.println(F(" mL/min"));
  Serial.print(F("Volume:    ")); Serial.print(VOLUME_ML);            Serial.println(F(" mL"));
  Serial.print(F("Steps/mL:  ")); Serial.println(STEPS_PER_ML);
  Serial.println(F("Commands: s = start, x = stop, r = retract"));
}

void loop() {
  if (Serial.available()) {
    char cmd = Serial.read();

    if (cmd == 's') {
      float speed = FLOW_RATE_ML_PER_MIN * STEPS_PER_ML / 60.0;  // steps/s
      long steps  = lround(VOLUME_ML * STEPS_PER_ML);
      stepper.enableOutputs();
      stepper.setMaxSpeed(speed);
      stepper.move(steps);
      Serial.println(F("Dispensing..."));
    } else if (cmd == 'x') {
      stepper.stop();  // decelerates to a stop
      Serial.println(F("Stopping."));
    } else if (cmd == 'r') {
      stepper.enableOutputs();
      stepper.setMaxSpeed(RETRACT_SPEED);
      stepper.moveTo(0);
      Serial.println(F("Retracting..."));
    }
  }

  if (stepper.distanceToGo() != 0) {
    stepper.run();
    if (stepper.distanceToGo() == 0) {
      stepper.disableOutputs();
      Serial.println(F("Done."));
    }
  }
}
