# Notes

VSCode is terrible and somehow I got this error `errno 65544: Wayland: libdecor error 0: GTK cannot connect to Wayland compositor` when running the program inside the VSCode terminal (installed on the system, not in a sandbox with flatpak or snap), but it ran just fine in my normal terminal emulator (GNOME terminal). 

## Wayland vs X11
Disregard. It will run just fine without it.
To compile for Wayland: https://www.glfw.org/docs/3.3/compile.html#compile_deps_wayland
Clear the `build/` directory then in it run `cmake ../ -D GLFW_BUILD_WAYLAND=1`
Don't use `GLFW_USE_WAYLAND` like it says in the guide (it is removed).
```
CMake Error at include/glfw/CMakeLists.txt:31 (message):
  GLFW_USE_WAYLAND has been removed; delete the CMake cache and set
  GLFW_BUILD_WAYLAND and GLFW_BUILD_X11 instead
```
