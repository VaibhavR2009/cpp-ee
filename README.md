<div align="center">

# ⚡ The 365-Day C++ × Electrical Engineering Challenge

### Building a virtual electronics lab — one commit at a time.

**No hardware. No simulators. Everything from first principles.**

I couldn't get access to an electronics lab — so I decided to **write one**.

![Challenge](https://img.shields.io/badge/Challenge-365_Days-2ea44f?style=flat-square)
![Progress](https://img.shields.io/badge/Day-1_of_365-blue?style=flat-square)
![Language](https://img.shields.io/badge/C%2B%2B-17-00599C?style=flat-square&logo=cplusplus&logoColor=white)
![Math](https://img.shields.io/badge/Linear_Algebra-Eigen-8A2BE2?style=flat-square)
![Discipline](https://img.shields.io/badge/Rule-Commit_Daily-FF8C00?style=flat-square)

</div>

---

## 🧭 The Mission

One year. One language. Zero physical electronics.

For the next **365 days**, I'm teaching myself **C++ and electrical engineering at the same time** — with a twist: no breadboards, no oscilloscopes, no off-the-shelf SPICE. Instead of *using* the tools engineers rely on, I'm **building them**: a circuit simulator, a filter designer, an FFT spectrum analyzer, and a virtual lab bench — all from scratch.

By Day 365, this repo won't just show what I learned. It will show **what I built with what I learned**.

> The best way to understand a tool is to be forced to build it.

---

## 📜 The Rules

Five non-negotiables. Every day. No exceptions.

| # | Rule | Why it matters |
|:-:|:------|:---------------|
| 1 | **Commit every single day** | The streak *is* the curriculum — consistency beats intensity |
| 2 | **Never paste code I can't rederive** | The learning lives in the derivation, not the copy |
| 3 | **Every project ships with a README and a plot** | No plot, no proof |
| 4 | **Stuck 2+ days? Shrink the problem** | Debugging is engineering; grinding is not |
| 5 | **Validate everything** | Analytic vs. numerical — and eventually, my tools against each other |

---

## 🗺️ The 12-Month Roadmap

| Phase | Months | Focus | Milestone |
|:------|:------:|:------|:-----------|
| 🏗️ **Foundations** | 1–3 | C++ core · OOP · memory · complex numbers · DC & AC solvers | *ACLab* |
| 🔬 **Instruments** | 4–6 | Eigen · frequency response · transients · **MySPICE v1.0** | ⭐ Mid-year capstone |
| 📡 **Nonlinear + DSP** | 7–10 | Newton–Raphson · transistors · signals · filters · FFT | *SpecLab* |
| 🧰 **Integration** | 11–12 | Control systems · PID · unified virtual lab bench | 🏁 *VirtualBench* |

<details>
<summary><b>📖 Full month-by-month breakdown (click to expand)</b></summary>

- [ ] **Month 1** — C++ basics + DC refresher → `OhmSolver`
- [ ] **Month 2** — OOP + Gaussian elimination → `miniDC` (nodal analysis)
- [ ] **Month 3** — Memory, templates, phasors → `ACLab`
- [ ] **Month 4** — Eigen + transfer functions → `BodeLab`
- [ ] **Month 5** — Polymorphism + numeric integration → `TransLab`
- [ ] **Month 6** — ⭐ **CAPSTONE: `MySPICE v1.0`** (DC/AC/transient)
- [ ] **Month 7** — Newton–Raphson + diodes/transistors/op-amps → `MySPICE v2.0`
- [ ] **Month 8** — WAV I/O + convolution → `SigLab`
- [ ] **Month 9** — FIR/IIR + Butterworth/Chebyshev → `FilterLab`
- [ ] **Month 10** — FFT from first principles → `SpecLab`
- [ ] **Month 11** — Poles/zeros + PID → `ControlLab`
- [ ] **Month 12** — 🏁 Integration + portfolio release → `VirtualBench`

</details>

---

## 🛠️ The Tools I'm Building

| Tool | What it does | Concepts it proves | Status |
|:-----|:-------------|:-------------------|:------:|
| **OhmSolver** | Netlist-driven DC circuit calculator | C++ basics, file parsing | 📅 Planned |
| **miniDC** | Nodal analysis solver (my hand-rolled Gaussian elimination) | OOP, linear algebra | 📅 Planned |
| **ACLab** | AC steady-state phasor solver | Complex numbers, templates | 📅 Planned |
| **BodeLab** | Bode magnitude/phase plots for RLC networks | Eigen, frequency domain | 📅 Planned |
| **TransLab** | RLC transient simulator with error analysis | Inheritance, RK4 integration | 📅 Planned |
| **MySPICE** | A SPICE-style simulator: DC, AC, transient, nonlinear | *Everything above, unified* | 📅 Planned |
| **SigLab** | Signal generator + WAV I/O + convolution engine | DSP, performance | 📅 Planned |
| **FilterLab** | Analog + digital filter design suite | Bilinear transform, Z-domain | 📅 Planned |
| **SpecLab** | FFT spectrum analyzer + spectrograms | Algorithms, O(N log N) | 📅 Planned |
| **ControlLab** | PID tuning + second-order system analysis | Feedback, stability | 📅 Planned |
| **VirtualBench** | The whole lab, unified in one app | Software architecture | 📅 Planned |

> 💡 *Statuses update as the challenge progresses — check back and watch this table fill in.*

---

## 💻 Tech Stack

`C++17` · `CMake` · `Eigen` · `git` · `doctest` · `gnuplot` — and a stubborn refusal to import what I can build.

---

## 📈 Progress

<div align="center">

**Challenge progress:**
`■■□□□□□□□□□□□□□□□□□□ 3%` *(2/365 days)*

[![GitHub Stats](https://github-readme-stats.vercel.app/api?username=VaibhavR2009&show_icons=true&hide_title=true)](https://github.com/YOUR_GITHUB_USERNAME)

</div>

---

## 📝 Devlog

Every day gets one honest paragraph in [`DEVLOG.md`](DEVLOG.md) — wins, bugs, dead ends, and all. No curated highlight reel.

<details>
<summary><b>🪵 Latest entries</b></summary>

| Day | Entry |
|:---:|:------|
| 2 | Set up toolchain, fought CMake, won. First netlist parser works. |
| 1 | Day one: compiler installed, repo created, streak started. |

</details>

---

## 🎓 Why I'm Doing This

I learn by building. Reading about circuits teaches me what they are — but writing a solver that *fails* until I truly understand nodal analysis teaches me what they *mean*.

When I realized I'd spend a year without access to physical electronics, I had two options: wait for a lab, or become one. I chose the second.

This repo is my proof of work: not a certificate, not a course completion badge — a **virtual electronics lab, written line by line, by someone who started at zero.**

---

## 📬 Follow Along

- ⭐ Star this repo to watch a lab bench get built from nothing
- 📬 Reach me: [vaibhav.ramji09@gmail.com](mailto:vaibhav.ramji09@gmail.com)
- 💼 LinkedIn: [https://www.linkedin.com/in/vaibhav-ramji-729527396/]

<div align="center">

*"A year from now, you'll wish you had started today."* — **Day 1.**

</div>