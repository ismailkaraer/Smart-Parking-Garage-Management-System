//
// Created by İsmail Karaer on 10.11.2026.
//

#ifndef CMPE261_PARKINGGARAGE_ISMAILKARAER_CAR_H
#define CMPE261_PARKINGGARAGE_ISMAILKARAER_CAR_H
#include "Vehicle.h"


class Car : public Vehicle {
public:
    Car(string plateNumber, string ownerName);
    void displayInfo() override;
    int calculateFee(int hours) override;


};


#endif //CMPE261_PARKINGGARAGE_ISMAILKARAER_CAR_H
