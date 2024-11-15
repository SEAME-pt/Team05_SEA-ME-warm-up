# SEA:ME Warm Up
## Introduction to peer-peer learning & collaboration  


# Introduction
A 2-weeks intensive workshop to introduce peer-peer learning and collaboration among students using GitHub and Qt is a great way to help students develop valuable skills in teamwork, software development, and open-source collaboration.


# Compilation
To compile each exercise of each module, you should navigate to the directory of the specific exercise and run the following commands:
```bash
mkdir build
cd build
cmake ..
cmake --build .
./executable
```

# DoxyGen
To generate the Doxyfile run the following commands:
```bash
sudo apt install doxygen
mkdir doc
doxygen Doxyfile
xdg-open doc/html/index.html
```

# Goals & Objectives
The overall goal of the 2-week intensive workshop is to introduce peer-to-peer learning and collaboration among students using GitHub and Qt:

Goals:

1. Introduce students to GitHub and how it can be used for collaboration and version control.
2. Introduce students to the Qt framework and provide an overview of how it can be used to develop GUI applications using C++/Qt/Qml.
3. Encourage students to collaborate with each other and to help each other learn.
4. Provide students with the opportunity to practice open-source collaboration.
5. Foster a sense of community and teamwork among the students.

# General Rules
### You should use the latest Qt LTS (open source / community version) with C++17 / C++20 / C++23

- Compile your code with [qmake](https://doc.qt.io/qt-6/qmake-manual.html) or [CMake](https://cmake.org/)
- Note: You don't need to download all the packages from Qt maintaner tool! Choose wisely --> start with compiler only, Qt creater is default!

### Formatting & Naming convention.

- **Standard C++ coding styles recommended**

- Write class names in **UpperCamelCase** format. Files containing class will always be named according to the class name. For instance: **ClassName.hpp/ClassName.h, ClassName.cpp,** or **ClassName.tpp.**
- Definition and Declaration should be separated into different files (.cpp file and .hpp or .h file). (except template class)
- Your code should be understandable. Every name must have meaning.
- The code without comments is a bad code!

### Git commit message convection

- The 'git commit message' should be understandable to others.

### Allowed & Forbidden
- Include safeguards like #pragma once
- From Module 02 to Module 05, your classes must be designed in the Orthodox Canonical Form, except when explicitly stated otherwise.

# Modules
## [Module00](./Modules/Module00.md)
## [Module01](./Modules/Module01.md)
## [Module02](./Modules/Module02.md)
## [Module03](./Modules/Module03.md)
## [Module04](./Modules/Module04.md)


Shield: [![CC BY-NC-SA 4.0][cc-by-nc-sa-shield]][cc-by-nc-sa]

This work is licensed under a
[Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License][cc-by-nc-sa].

[![CC BY-NC-SA 4.0][cc-by-nc-sa-image]][cc-by-nc-sa]

[cc-by-nc-sa]: http://creativecommons.org/licenses/by-nc-sa/4.0/
[cc-by-nc-sa-image]: https://licensebuttons.net/l/by-nc-sa/4.0/88x31.png
[cc-by-nc-sa-shield]: https://img.shields.io/badge/License-CC%20BY--NC--SA%204.0-lightgrey.svg
