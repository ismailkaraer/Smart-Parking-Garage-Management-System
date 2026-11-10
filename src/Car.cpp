//
// Created by İsmail Karaer on 10.11.2026.
//

#include "../include/Car.h"
#include <iostream>

Car::Car(string plateNumber, string ownerName) : Vehicle(plateNumber, ownerName) {
}

int Car::calculateFee(int hours) {
    int fee;
    fee = 30 + ((hours-1) * 20);
    return fee;
}

void Car::displayInfo() {
    cout<<"Car - "<<getPlateNumber()<<endl;
    cout<<"Owner Name: "<<getOwnerName()<<endl;
}
