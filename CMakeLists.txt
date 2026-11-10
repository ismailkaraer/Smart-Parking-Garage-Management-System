cmake_minimum_required(VERSION 4.3)
project(CMPE261_ParkingGarage_IsmailKaraer)

set(CMAKE_CXX_STANDARD 20)

add_executable(CMPE261_ParkingGarage_IsmailKaraer src/main.cpp
        src/Car.cpp
        include/Car.h
        src/Vehicle.cpp
        src/Motorcycle.cpp
        include/Motorcycle.h
        src/ParkingGarage.cpp
        include/ParkingGarage.h
)
