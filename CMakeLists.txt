cmake_minimum_required(VERSION 3.7.1)
project(TallerDeStrings)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)

set(SOURCE_FILES main.cpp src/ejercicios.cpp tests/Ej1_esPalindromo.cpp tests/Ej2_anagramas.cpp tests/Ej3_substring.cpp tests/Ej4_split.cpp tests/Ej5_darVueltaPalabra.cpp tests/Ej6_subsecuencia.cpp tests/Ej7_agruparAnagramas.cpp tests/Ej8_reversoCada.cpp)
add_executable(TallerDeStrings ${SOURCE_FILES})

target_link_libraries(TallerDeStrings gtest gtest_main)
