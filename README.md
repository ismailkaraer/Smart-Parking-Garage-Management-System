# Smart Parking Garage Management System

[![Build and smoke test](https://github.com/ismailkaraer/Smart-Parking-Garage-Management-System/actions/workflows/ci.yml/badge.svg)](https://github.com/ismailkaraer/Smart-Parking-Garage-Management-System/actions/workflows/ci.yml)

A C++ console project for CMPE 261 (Large Scale Programming). It tracks parking spaces, calculates fees for cars and motorcycles, and records the total revenue collected by the garage.

## Features

- Park and find vehicles by license plate in a garage with 1–10 spaces.
- Calculate vehicle-specific hourly fees and optionally apply an exit discount.
- List parked vehicles, show available spaces, and report revenue and the number of vehicle objects created.
- Reject duplicate plates, full capacity, unknown plates, invalid durations, and discounts outside 0–100%.

## Parking rates

| Vehicle | First hour | Each additional hour |
| --- | ---: | ---: |
| Car | 30 TL | 20 TL |
| Motorcycle | 15 TL | 15 TL |

## Build and run

From the repository root, use a C++20 compiler and CMake 4.3 or later. The commands below use a single-configuration generator on macOS or Linux.

```sh
cmake -S . -B build
cmake --build build
./build/CMPE261_ParkingGarage_IsmailKaraer
```

You can also build directly with a C++20 compiler.

```sh
c++ -std=c++20 -Wall -Wextra -pedantic src/*.cpp -o parking-garage
./parking-garage
```

## Sample run

The built-in demo parks two vehicles. It charges 90 TL for a four-hour car stay and 54 TL for a four-hour motorcycle stay with a 10% discount, then attempts an exit for an unknown plate.

```text
Parking Fee: 90 TL
Vehicle exited successfully.
Available Spots: 2
Parking Fee: 54 TL
Vehicle exited successfully.
Total Revenue: 144 TL
Total Vehicles Created: 2
ERROR: Vehicle not found.
```

## Project layout

| Path | Contents |
| --- | --- |
| `include/` | Declarations for `Vehicle`, `Car`, `Motorcycle`, and `ParkingGarage`. |
| `src/` | Class implementations and the demonstration in `main.cpp`. |
| `CMakeLists.txt` | CMake target and C++ standard settings. |
| `.github/workflows/ci.yml` | Linux build and checks for the demo output. |
