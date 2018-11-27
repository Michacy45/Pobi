cmake_minimum_required(VERSION 3.12)
project(trunk)

set(CMAKE_CXX_STANDARD 14)

include_directories(biblioteka/include)
include_directories(biblioteka/src)
include_directories(program/include)

add_executable(trunk
        biblioteka/include/Client.h
        biblioteka/src/Client.cpp
        program/src/main.cpp
        biblioteka/include/Address.h
        biblioteka/src/Address.cpp
        biblioteka/include/Rent.h
        biblioteka/src/Rent.cpp
        biblioteka/include/Vehicle.h
        biblioteka/src/Vehicle.cpp
        biblioteka/include/MotorVehicle.h
        biblioteka/src/MotorVehicle.cpp
        biblioteka/include/Car.h
        biblioteka/src/Car.cpp)