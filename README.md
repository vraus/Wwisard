# Wwisard 🎧🧙‍♂️  
*A prototype for dynamic 3D audio integration using Wwise + Unreal Engine 5*

## 🧩 Overview

**Wwisard** is a technical prototype demonstrating the full integration pipeline between **Audiokinetic Wwise** and **Unreal Engine 5**, with a focus on:

- Spatialized sound effects (gunshots, impacts, footsteps)
- Real-time audio parameters (attenuation, RTPCs)
- Music and ambient loops
- A simple UI menu

This project was developed as part of a **Master's thesis (M2)** in game developments and serves as a sandbox for experimentation and learning sound integration.

---

## 🚀 Features

- ✅ **3D audio spatialization** using `PostEventAtLocation`
- ✅ **RTPCs and Random Containers** for sound variation
- ✅ **Footstep system** with material-aware switches (wood, grass, concrete)
- ✅ **Ambient sound/music bus** with custom attenuation
- ✅ **Blueprint & C++ integration** examples
- ✅ **Simple main menu** for audio controls

---

## 🛠 Tech Stack

| Tool            | Purpose                              |
|-----------------|--------------------------------------|
| **Wwise 2024.1+**  | Authoring and soundbank generation   |
| **Unreal Engine 5.3+** | Game engine, integration host        |
| **Blueprints + C++**  | Runtime event handling             |
| **AK Plugins**     | RTPCs, switches, attenuation curves |

---

## 🧪 Prototype: What is Wwisard?

The prototype is built around a first-person "torso" character who:

- Fires projectiles that trigger distant impact sounds
- Lives in a looping, ambient soundscape with background music
- Interacts with an in-game menu providing **sonified UI elements**

All sounds are designed to **react dynamically** to gameplay context (distance, material, state) using Wwise’s authoring tools and Unreal's logic system.

---

## 🧠 Key Learnings

- Efficient workflow through **non-destructive iteration**
- Clear separation between **sound design** and **implementation logic**
- Use of **Profiler**, **Capture Logs**, and **live diagnostics** to refine in-game audio
- Dealing with challenges: **source control for Wwise**, initial config complexity, and **learning curve**

---

## 🔮 Further Improvements

- 🎚 RTPCs tied to real-time variables (e.g. projectile speed → pitch)
- 🏞 Environmental switches (interior/exterior zones)
- 🔊 Advanced spatialization: convolution reverb, plugins (e.g. Dolby Atmos)
- 🎛 In-game audio settings menu (music/sfx sliders)

---

## 🎓 Educational Context

This project was conducted as part of a research-driven university module exploring:

- Game middleware audio
- Real-time spatial sound design
- Technical collaboration between designers and developers

---

## 📽 Demo & Showcase

> 📹 [Click here to watch the demo video](#) *(Coming soon or insert link)*  
> 📄 [Read the full report (PDF)](Docs/Wwisard_Report.pdf)

---

## 📜 License

This repository is for **educational and portfolio use only**. Audio assets used are either royalty-free or placeholders. Not for commercial redistribution.

---

## 🤝 Acknowledgements

- [Audiokinetic](https://www.audiokinetic.com/) for Wwise
- Epic Games for Unreal Engine
- My university program & mentors for guidance  

---


