//
// Created by İsmail Karaer on 10.11.2026.
//
#include "../include/Motorcycle.h"
#include <iostream>
Motorcycle::Motorcycle(string plateNumber, string ownerName):Vehicle(plateNumber, ownerName) {
}

int Motorcycle::calculateFee(int hours) {
    int fee;
    fee = hours * 15;
    return fee;
}

void Motorcycle::displayInfo() {
    cout<<"Motorcycle - "<<getPlateNumber()<<endl;
    cout<<"Owner Name: "<<getOwnerName()<<endl;
}
