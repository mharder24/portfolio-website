---
title: "Multi-material Pliers"
excerpt: "Working pliers 3D printed with two materials."
header:
  teaser: /assets/img/Pliers_Card.jpg
gallery:
- url: /assets/img/Pliers_Arm_ver1.jpg
  image_path: assets/img/Pliers_Arm_ver1.jpg
  alt: "Plier Arm CAD render, front three-quarter view"
- url: /assets/img/Pliers_Assembly_finalver.jpg
  image_path: assets/img/Pliers_Assembly_finalver.jpg
  alt: "Pliers assembly CAD render, final version"
- url: /assets/img/Pliers_Final_Photo.jpg
  image_path: assets/img/Pliers_Final_Photo.jpg
  alt: "Printed pliers held in hand"
---

Using PLA and TPU, I created multimaterial pliers in a crossover tweezer design. Pinching the handles forces the jaws to come together, gripping whatever is between them. 

# What Is Print-in-Place?

Print-in-place is a 3D printing technique in which an object with moving or interlocking parts is printed as a single, fully assembled piece in one continuous print session. 

## Where Else It's Used

Print-in-place connects interlocked parts using joints such as hinges, ball-and-socket joints, or chain links. Examples range from fidget toys like the infinity cube to chainmail used in costume making.

* [Infinity Cube](https://www.printables.com/model/652108-infinity-cube-print-in-place)
* [Chainmail](https://www.instructables.com/Print-in-Place-Chainmail-Jewelry/)

## Materials That Work Well

PLA works best for print-in-place, especially if you can only print with one material. It has low warping, clean bridging over internal gaps, and crisp edge definition. If you can print with multiple materials, a good addition would be PETG for high-stress parts that might need higher impact resistance or thermal durability. 

# CAD Model

<!-- Replace the src link below with your Fusion 360 embed link (Share > Public Link > Embed). -->
<iframe src="https://a360.co/4hKPbP8" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>

# Design and Iterations

Using the designs of current pliers and tweezers on the market, this design combined both into a unique idea. The first iteration used a pivot; however, to keep the design cleaner, the pivot was scrapped. The second iteration was then scaled down to pick up smaller items such as a resistor. After printing, the jaws would not fully close, so another iteration was needed. The pivot point of the pliers was shrunk and the handles were elongated to move the pivot toward the back of the pliers, like tweezers. 

## The Spring

The spring was created using a semi-circle design since the sides collapse inward when an outside force squeezes them together. Multiple iterations were printed with different infill percentages to see which one had the best balance of flexibility and elasticity.

## Materials Used

PLA was used for the rigid parts of the pliers since it is cheap and sturdy, especially when making multiple iterations of the design. TPU was used for the spring due to its flexibility and elasticity. 

# Specifications

| Specification | Value |
|:--------------|:-----:|
| Jaw length | 30 mm |
| Jaw capacity | [ ] mm |

# Print Settings

## Plier Arms

| Setting | Value |
|:--------|:-----:|
| Material | PLA |
| Shell layers | 3 |
| Perimeter | 3 |
| Infill | 25 % |
| Layer Type | Gyroid |
| Nozzle temperature | 215 °C |
| Bed temperature | 65 °C |
| Supports | None |
| Print time | ~1 hour |

## Spring

| Setting | Value |
|:--------|:-----:|
| Material | TPU |
| Shell layers | 3 |
| Perimeter | 3 |
| Infill | 5 % |
| Layer Type | Rectilinear |
| Nozzle temperature | 230 °C |
| Bed temperature | 60 °C |
| Supports | None |
| Print time | ~3 hours |

# Pliers in Action

![Pliers opening and closing]({{ "/assets/img/Pliers.gif" | relative_url }})


# Gallery

{% include gallery caption="Pliers Gallery" %}
