# HCI & Computer Graphics Lab 1

- **Name:** Moiz Abdullah
- **Registration Number:** 2024-cse-028
- **Toolchain:** C++ / OpenGL (GLFW / GLEW)

## Task 1.2

The starter program creates an 800 x 600 OpenGL window and clears it every frame
with the custom colour `glClearColor(0.08f, 0.02f, 0.18f, 1.0f)`.

At startup, it prints the OpenGL version and renderer in this format:

```text
GL <version> on <renderer>
```

Build and run from a configured CMake build directory:

```text
cmake -S . -B build
cmake --build build --config Release
build\Release\hcicg_lab1.exe
```
