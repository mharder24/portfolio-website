---
title: "Syringe Pump"
excerpt: "An Arduino-controlled, 3D printed syringe pump for precise and programmable fluid dispensing."
header:
  image: /assets/img/Syringe-Pump-Banner.jpg
  teaser: /assets/img/Syringe-Pump-Banner.jpg
gallery:
  - url: /assets/img/Syringe_Pump_1.png
    image_path: assets/img/Syringe_Pump_1.png
    alt: "Syringe pump CAD render, front three-quarter view"
  - url: /assets/img/Syringe_Pump_2.png
    image_path: assets/img/Syringe_Pump_2.png
    alt: "Syringe pump CAD render, rear three-quarter view"
  - url: /assets/img/Syringe_Pump_3.png
    image_path: assets/img/Syringe_Pump_3.png
    alt: "Syringe pump CAD render, side view"
---

Syringe pumps deliver small, precise volumes of fluid and are used in laboratories for drug delivery, microfluidics, and chemical synthesis. Commercial pumps can cost hundreds of dollars, so this project uses 3D printed parts and low-cost electronics to build an affordable, open-source alternative.

# Features

* **Stepper Motor Drive.** A NEMA 17 stepper motor turns a lead screw that pushes the syringe plunger forward at a controlled rate.
* **Smooth Motion Control.** The Arduino code uses the AccelStepper library to ramp the motor up and down smoothly, keeping the flow steady.
* **Programmable Flow.** The flow rate and volume are set in the Arduino code.
* **Low Cost.** Built from off-the-shelf hardware and 3D printed PLA parts.

# Off-the-Shelf Parts

| Part | Quantity | Purpose |
|:-----|:--------:|:--------|
| Arduino Uno | 1 | Microcontroller |
| NEMA 17 Stepper Motor | 1 | Drives the lead screw |
| A4988 Stepper Driver | 1 | Powers the motor |
| T8 Lead Screw and Nut | 1 | Converts rotation to linear motion |
| 8 mm Smooth Rods | 1 | Linear guides |
| LM8UU Linear Bearings | 2 | Carriage bearings |
| Shaft Coupler (5 mm to 8 mm) | 1 | Connects motor to lead screw |
| 12 V Power Supply | 1 | Motor power |
| Syringe | 1 | Fluid reservoir |

# 3D Printed Parts

| Part | Quantity | Material |
|:-----|:--------:|:--------:|
| Motor End Mount | 1 | PLA |
| Idler End Mount | 1 | PLA |
| Plunger Carriage | 1 | PLA |
| Syringe Clamp | 1 | PLA |

# Arduino Code

The Arduino code for this project is available on GitHub: [syringe_pump.ino](https://github.com/mharder24/portfolio-website/blob/main/code/syringe_pump.ino)

# CAD Model

<!-- Replace the src link below with your Fusion 360 embed link (Share > Public Link > Embed). -->
<iframe src="https://a360.co/4zcpwGg" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# How to Operate

1. **Load the syringe.** Fill the syringe, place it in the clamp, and seat the plunger against the carriage.
2. **Connect power.** Plug the Arduino into a computer over USB and connect the 12 V power supply.
3. **Set the flow.** Open `syringe_pump.ino`, enter the desired flow rate and volume, and upload the code.
4. **Run the pump.** [Describe how you start the pump.]
5. **Finish.** Disconnect power, remove the syringe, and clean up any spills.

{% include gallery caption="Syringe Pump Gallery" %}
