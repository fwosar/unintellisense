cmake_minimum_required(VERSION 3.21)

project ("unintellisense" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable (unintellisense "src/unintellisense.cpp" "include/pch.h")
target_include_directories(unintellisense PRIVATE "include")
target_precompile_headers(unintellisense PRIVATE "$<$<COMPILE_LANGUAGE:CXX>:pch.h>")