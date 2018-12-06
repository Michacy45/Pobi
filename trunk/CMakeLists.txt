cmake_minimum_required(VERSION 3.12)
project(trunk)

set(CMAKE_CXX_STANDARD 14)

include_directories(biblioteka/include)

add_executable(trunk
        biblioteka/include/Address.h
        biblioteka/include/Bicycle.h
        biblioteka/include/Car.h
        biblioteka/include/Client.h
        biblioteka/include/ClientRepository.h
        biblioteka/include/ClientType.h
        biblioteka/include/RentsRepository.h
        biblioteka/include/Moped.h
        biblioteka/include/MotorVehicle.h
        biblioteka/include/Rent.h
        biblioteka/include/RentsManager.h
        biblioteka/include/Vehicle.h
        biblioteka/include/VehicleRepository.h
        biblioteka/src/Address.cpp
        biblioteka/src/Bicycle.cpp
        biblioteka/src/Car.cpp
        biblioteka/src/Client.cpp
        biblioteka/src/ClientRepository.cpp
        biblioteka/src/ClientType.cpp
        biblioteka/src/RentsRepository.cpp
        biblioteka/src/Moped.cpp
        biblioteka/src/MotorVehicle.cpp
        biblioteka/src/Rent.cpp
        biblioteka/src/RentsManager.cpp
        biblioteka/src/Vehicle.cpp
        biblioteka/src/VehicleRepository.cpp
        biblioteka/test/ClientTest.cpp
        biblioteka/test/master.cpp
        program/src/main.cpp biblioteka/include/Repository.h biblioteka/src/Repository.cpp)
