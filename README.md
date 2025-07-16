# 🎮 TurtleEngine – A Modular C++ Game Engine (WIP)

**TurtleEngine** is a modular, lightweight C++ game engine built from scratch, starting with a custom math library.  
It’s designed with a clean architecture and modern CMake project layout, making it ideal for learning, extensibility, and experimentation.

---

## ✅ Features (Current)

- 🔢 Custom `Vector3` implementation with math operations (`dot`, `cross`, `normalize`, etc.) [not yet implemented]
- 🧱 Modular CMake build system
- 🧪 Unit test support using [Catch2](https://github.com/catchorg/Catch2)

---

## 🚧 Roadmap

- Expand math library (Matrix, Quaternion, Transform)
- Add windowing and input system (GLFW or SDL2)
- Integrate renderer (OpenGL or Vulkan)
- Scene graph or ECS-based entity system
- Asset and resource management
- Optional scripting, UI, physics, and audio modules

---

## 🛠️ Building

```bash
git clone https://github.com/HabelJonas/TurtleEngine.git
cd TurtleEngine
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug
cmake --build .
