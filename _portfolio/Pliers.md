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
---

Using PLA and TPU, I created a multimaterial pliers in a crossover teweezer design. When pinching the handles of the teweezers it forces the jaws to come together, pinching whatever is them. 

# What Is Print-in-Place?

It is a 3D printing technique when an object with moving or interlocking parts are printed as a single fulley assembled piece in one continuous print session. 

## Where Else It's Used

Print-in-place connect interlocked parts using joints such as hinges, ball and socket, or chain link. These includes objects such as fidget toys like the infinity cube to chainmail that can be used in costume making.

* [Infinity Cube](https://www.printables.com/model/652108-infinity-cube-print-in-place)
* [Chainmail](https://www.instructables.com/Print-in-Place-Chainmail-Jewelry/)

## Materials That Work Well

PLA works the best for print in place, especially if you can only print with one material. It has low warping, clean bridging over internal gaps, and crisp edge definitions. If you can print with multiple materials, a good addition would be PETG for high-stress parts that might need higher impact resistance or thermal durabiltity. 

# CAD Model

<!-- Replace the src link below with your Fusion 360 embed link (Share > Public Link > Embed). -->
<iframe src="https://a360.co/4hKPbP8" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>

# Design and Iterations

Using the designs of current pliers and tweezers on the market, this design combined both into a unique idea. The first iteration used a pivot, however, in order to have a more clean design, the pivot was scraped. The second iteration was then scaled down inorder to pick up smaller items such as a resistor.

## The Spring

The spring was created using a semi-circle design since the sides will collaspe inward when outside force squeezes them together. 

## Materials Used

PLA was used for the rigid parts of the pliers since it is a cheap and sturdy material to use, especially when making mutiple iterations of the design. For the spring, the material that was used was TPU due to its flexibitty and elasticity. 

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

[GIF of the pliers working goes here.]

<!-- Once your GIF is in assets/img, replace the line above with:
![Pliers opening and closing]({{ "/assets/img/Pliers.gif" | relative_url }})
-->


# Gallery

{% include gallery caption="Pliers Gallery" %}
