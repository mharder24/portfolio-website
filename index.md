---
layout: splash
title: "Digital Fabrication Portfolio"
permalink: /
header:
  overlay_color: "#000"
  overlay_filter: "0.5"
  overlay_image: /assets/images/home-banner.jpg
  actions:
    - label: "My Projects"
      url: "/portfolio/"
excerpt: >-
  Merissa Harder is an Electrical & Computer Engineering student at Vanderbilt University
  with a minor in Digital Fabrication. This website is a portfolio of her work in 3D printing,
  embedded systems, and assistive technology, documenting how each project went from idea
  to working hardware.

# Replace these with YOUR OWN photos (the assignment says to remove all stock images).
feature_row:
  - image_path: /assets/images/syringe-pump.jpg
    alt: "3D printed syringe pump"
    title: "Syringe Pump"
    excerpt: "An Arduino-controlled, 3D printed pump for precise, programmable fluid dispensing."
    url: "/portfolio/syringe-pump/"
    btn_label: "Read More"
    btn_class: "btn--primary"
  - image_path: /assets/images/hand-orthotic.jpg
    alt: "3D printed hand and index-finger orthotic"
    title: "Assistive Hand Orthotic"
    excerpt: "A custom PLA orthotic that helped a user with peripheral neuropathy grip pens, pick up keys, and open doors."
  - image_path: /assets/images/fpga.jpg
    alt: "DE10-Lite FPGA board"
    title: "RISC-V Processor"
    excerpt: "A 32-bit single-cycle RISC-V processor written in SystemVerilog and verified on an FPGA."
---

{% include feature_row %}
