cmake_minimum_required(VERSION 3.1.0)
project(NativeFInstaller VERSION 1.0.0)

set(CMAKE_C_STANDARD_REQUIRED TRUE)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

add_executable(finstaller main.c sutil.cpp sutil.h os.c os.h writer.cpp writer.h main.h)
