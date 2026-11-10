//
// Created by İsmail Karaer on 10.11.2026.
//

#include "../include/ParkingGarage.h"
#include <iostream>
#include "../include/Vehicle.h"
#include "../include/Car.h"
#include "../include/Motorcycle.h"
#include <stdexcept>
using namespace std;

ParkingGarage::ParkingGarage(int capacity) {
    if (capacity > 10 || capacity < 1)
        throw invalid_argument("Capacity must be between 1 and 10.");
    this->capacity = capacity;
    totalRevenue = 0.0;
    for (int i = 0; i < 10; i++) {
        parkingSpots[i] = nullptr;
    }
}
void ParkingGarage::parkVehicle(string plateNumber, string ownerName, char type){
    int empty;

    empty = -1;
    for (int i = 0; i < capacity; i++) {
        if (parkingSpots[i] != nullptr && parkingSpots[i]->getPlateNumber() == plateNumber) {
            throw invalid_argument("A vehicle with the same plate number already exists.");
        }
    }
    for (int i = 0; i < capacity; i++) {
        if (parkingSpots[i] == nullptr) {
            empty = i;
            break;
        }
    }
    if (empty == -1)
        throw runtime_error("Parking garage is full");
    Vehicle *vehicle = nullptr;
    if (type == 'C') {
        vehicle = new Car(plateNumber, ownerName);
    }
    else if (type == 'M') {
        vehicle = new Motorcycle(plateNumber, ownerName);
    }
    else {
        throw invalid_argument("This vehicle type is not allowed.");
    }
    parkingSpots[empty] = vehicle;
    cout << "Vehicle parked successfully. Spot: " << empty + 1 << endl;
}

int ParkingGarage::searchVehicle(string plateNumber) {
    for (int i = 0; i < capacity; i++) {
        if (parkingSpots[i] != nullptr && plateNumber == parkingSpots[i]->getPlateNumber()) {
            return i;
        }
    }
    return -1;
}

void ParkingGarage::exitVehicle(string plateNumber, int hours) {
    int fee;
    int i;

    if (hours < 1)
        throw invalid_argument("Hours must be greater than zero.");
    i = searchVehicle(plateNumber);
    if (i == -1) {
        throw runtime_error("Vehicle not found.");
    }
    fee = parkingSpots[i]->calculateFee(hours);
    totalRevenue += fee;
    cout << "Parking Fee: "<< fee<< " TL"<<endl;
    delete parkingSpots[i];
    parkingSpots[i] = nullptr;
    cout << "Vehicle exited successfully."<<endl;
}

void ParkingGarage::applyDiscount(double &fee, double discount) {
    fee = fee - (fee * discount/100.0);
}

void ParkingGarage::exitVehicle(string plateNumber, int hours, double discount) {
    double fee;
    int i;

    if ((discount < 0.0 || discount > 100.0) || hours < 1) {
        throw invalid_argument("Invalid discount percentage or parking duration.");
    }
    i = searchVehicle(plateNumber);
    if (i == -1) {
        throw runtime_error("Vehicle not found.");
    }
    fee = parkingSpots[i]->calculateFee(hours);
    applyDiscount(fee, discount);
    totalRevenue += fee;
    cout << "Parking Fee: "<< fee<< " TL"<<endl;
    delete parkingSpots[i];
    parkingSpots[i] = nullptr;
    cout << "Vehicle exited successfully."<<endl;
}

void ParkingGarage::displayAllVehicles() {
    for (int i = 0; i < capacity; i++) {
        if (parkingSpots[i] != nullptr) {
            cout << "Spot " << i + 1 << ": ";
            parkingSpots[i]->displayInfo();
        }
    }
}

void ParkingGarage::displayAvailableSpots() {
    int available;

    available = 0;
    for (int i = 0; i < capacity; i++) {
        if (parkingSpots[i] == nullptr) {
            available++;
        }
    }
    cout << "Available Spots: " << available << endl;
}

ParkingGarage::~ParkingGarage() {
    for (int i = 0; i < capacity; i++) {
            delete parkingSpots[i];
    }
}

double ParkingGarage::getTotalRevenue() {
    return totalRevenue;
}