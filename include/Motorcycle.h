//
// Created by İsmail Karaer on 10.11.2026.
//

#ifndef CMPE261_PARKINGGARAGE_ISMAILKARAER_MOTORCYCLE_H
#define CMPE261_PARKINGGARAGE_ISMAILKARAER_MOTORCYCLE_H
#include "Vehicle.h"


class Motorcycle :public Vehicle{
public:
    Motorcycle(string plateNumber, string ownerName);
    void displayInfo() override;
    int calculateFee(int hours) override;

};


#endif //CMPE261_PARKINGGARAGE_ISMAILKARAER_MOTORCYCLE_H
