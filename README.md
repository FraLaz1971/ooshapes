# OOSHAPES
This project is a simple example of how implement objects with the Object Oriented
paradigm in pure c language (not c++). We implement the shape class and the circle class
as extension of the geometrical shape, inherting the methods of shape.
###
It is written in c standard and can be compiled and run on Linux, Mac, and Microsoft Windows.
###
- shape.h --> interface of the shape class
- shape.c --> implementation of the shape class
- circle.h --> interface of the circle class
- circle.c --> implementation of the circle class
- mshapes.c --> contains the main()
###
- Makefile --> makefile for the gcc compiler on linux/(bsd)unix
- Makefile.mingw32 --> make file for the MinGW compiler on MS Windows
- Makefile.vc --> makefile for MSVC compiler on MS Windows
###
To compile on linux
###
`make`
###
To run on linux terminal
`./mshapes <radius>`
e.g.
`./mshapes 40`
###
To compile on MS Windows using MinGW c compiler
###
`make -f Makefile.mingw32`
###
###
To compile on MS Windows using MSVC compiler
###
`nmake /f Makefile.vc`
###
