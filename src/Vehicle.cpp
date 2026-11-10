//
// Created by İsmail Karaer on 10.11.2026.
//
#include <iostream>
#include "../include/Vehicle.h"
int Vehicle::totalVehicles=0;
Vehicle::Vehicle(string plateNumber, string ownerName) {
    this->plateNumber = plateNumber;
    this->ownerName = ownerName;
    totalVehicles++;
}
string Vehicle::getPlateNumber() {
    return plateNumber;
}
string Vehicle::getOwnerName() {
    return ownerName;
}
int Vehicle::getTotalVehicles() {
    return totalVehicles;
}
void Vehicle::setOwnerName(string ownerName) {
    this->ownerName = ownerName;
}

void Vehicle::displayInfo() {
    cout<<"PlateNumber: "<<plateNumber<<endl;
    cout<<"Owner Name: "<<ownerName<<endl;
}

Vehicle::~Vehicle() {

}