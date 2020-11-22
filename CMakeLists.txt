cmake_minimum_required(VERSION 3.1.0)
project(NativeFInstaller VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 14)

add_executable(finstaller main.c os.c os.h writer.h main.h writer.c)
