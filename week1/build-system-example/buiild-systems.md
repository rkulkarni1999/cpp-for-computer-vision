# What are build systems

- They are Tools.
- Automate the build systems if the project.
- In the beginning they were shell scripts, then they were MakeFiles and now they are metaBuilds like CMake.
  - Cmake is not a build system.
  - It is a build system generator.
  - You will have to use an actual build system such as ``Make`` ``Ninja``.


# Build a CMake Project

- Build System from the user perspective.
  - ``cd <project_folder>``
  - `mkdir build`
  - `cd build`
  - `cmake ..`
  - `make`

- The build process is completely defined in the CmakeLists.txt
- And the Childrens src/CMakeLists.txt, etc. 