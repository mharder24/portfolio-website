---
title: "Syringe Pump"
# The next two lines control the thumbnail and description on the Portfolio Archive page.
excerpt: "An Arduino-controlled, 3D printed syringe pump for precise and programmable fluid dispensing."
header:
  teaser: /assets/images/syringe-pump.jpg
---

![Assembled syringe pump](/assets/images/syringe-pump.jpg)
*The completed syringe pump.*

## Purpose and Features

<!-- Replace with your own description. Cite outside sources with a linked in-text citation, e.g. [[1]](#references). -->
Syringe pumps deliver small, precise volumes of fluid and are widely used in laboratories for
drug delivery, microfluidics, and chemical synthesis [[1]](#references). Commercial units can
cost hundreds of dollars, so this project uses 3D printed parts and low-cost electronics to
build an open-source alternative.

Key features:
- **Stepper-motor drive** – a NEMA 17 motor turns a lead screw that pushes the syringe plunger.
- **Smooth motion** – the AccelStepper library ramps the motor up and down for precise control.
- **Programmable** – flow rate and volume are set in Arduino code.
- **Low cost** – built from off-the-shelf hardware and PLA printed parts.
- **Adaptable** – [describe which syringe sizes it fits].

## Bill of Materials

### Off-the-Shelf Parts

| Part | Quantity | Description / Source |
|:-----|:--------:|:---------------------|
| Arduino Uno (or Nano) | 1 | Microcontroller |
| NEMA 17 stepper motor | 1 | Drives the lead screw |
| A4988 stepper driver | 1 | Motor driver |
| T8 lead screw + nut | 1 | Converts rotation to linear motion |
| 8 mm smooth rods | 2 | Linear guides |
| LM8UU linear bearings | 2 | Carriage bearings |
| 5 mm to 8 mm shaft coupler | 1 | Motor-to-screw connection |
| M3 screws and nuts | [#] | Fasteners |
| 12 V power supply | 1 | Motor power |
| Syringe ([size] mL) | 1 | Fluid reservoir |

### 3D Printed Parts

| Part | Quantity | Material | Print Notes |
|:-----|:--------:|:--------:|:------------|
| Motor end mount | 1 | PLA | 20% infill, no supports |
| Idler end mount | 1 | PLA | 20% infill, no supports |
| Plunger carriage | 1 | PLA | 40% infill |
| Syringe clamp | 1 | PLA | 20% infill |
| Electronics enclosure | 1 | PLA | Optional |

## Arduino Code

The Arduino sketch that controls the pump is available in this website's GitHub repository:
[**syringe_pump.ino**](https://github.com/mharder24/mharder24.github.io/blob/main/code/syringe_pump.ino)

The code uses the [AccelStepper](https://www.airspayce.com/mikem/arduino/AccelStepper/) library
to give the motor smooth acceleration and deceleration, which keeps the flow steady.

## Interactive 3D Model

Click and drag to rotate the assembly; scroll to zoom.

<!-- In Fusion 360: File > Share > Public Link > Embed, copy the iframe, and paste its src URL below. -->
<div style="position: relative; padding-bottom: 75%; height: 0; overflow: hidden;">
  <iframe src="https://YOUR-FUSION-360-EMBED-LINK"
          style="position: absolute; top: 0; left: 0; width: 100%; height: 100%; border: 0;"
          allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"></iframe>
</div>

## How to Operate the Pump

1. **Load the syringe.** Fill the syringe, place it in the clamp, and seat the plunger against the carriage.
2. **Connect power.** Plug the Arduino into your computer over USB and connect the 12 V supply to the motor driver.
3. **Set the flow parameters.** Open `syringe_pump.ino`, enter the desired flow rate and volume, and upload the code.
4. **Run.** [Describe how the pump is started, e.g., press the button or send a command through the Serial Monitor.]
5. **Stop and clean up.** Disconnect power, remove the syringe, and clean any spills.

## References

1. [Author], "[Title of source]," [Website or Journal], [Year]. [https://example.com](https://example.com)
