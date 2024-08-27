cmake_minimum_required(VERSION 3.29)
project(cpp_module_04)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(animals
    ex00/include/Animal.hpp
    ex00/include/Cat.hpp
    ex00/include/Dog.hpp
    ex00/include/WrongAnimal.hpp
    ex00/include/WrongCat.hpp
    ex00/src/Animal.cpp
    ex00/src/Cat.cpp
    ex00/src/Dog.cpp
    ex00/src/main.cpp
    ex00/src/WrongAnimal.cpp
    ex00/src/WrongCat.cpp)

target_include_directories(animals PUBLIC
    ex00/include)

add_executable(brain
    ex01/include/Animal.hpp
    ex01/include/Brain.hpp
    ex01/include/Cat.hpp
    ex01/include/Dog.hpp
    ex01/include/WrongAnimal.hpp
    ex01/include/WrongCat.hpp
    ex01/src/Animal.cpp
    ex01/src/Brain.cpp
    ex01/src/Cat.cpp
    ex01/src/Dog.cpp
    ex01/src/main.cpp
    ex01/src/WrongAnimal.cpp
    ex01/src/WrongCat.cpp)

target_include_directories(brain PUBLIC
    ex00/include)