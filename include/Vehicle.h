//
// Created by İsmail Karaer on 10.11.2026.
//

#ifndef CMPE261_PARKINGGARAGE_ISMAILKARAER_VEHICLE_H
#define CMPE261_PARKINGGARAGE_ISMAILKARAER_VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
private:
    string plateNumber;
    string ownerName;
    static int totalVehicles;
public:
    Vehicle(string plateNumber, string ownerName);
    string getPlateNumber();
    string getOwnerName();
    void setOwnerName(string ownerName);
    virtual void displayInfo();
    virtual int calculateFee(int hours)=0;
    virtual ~Vehicle();
    static int getTotalVehicles();

};

#endif //CMPE261_PARKINGGARAGE_ISMAILKARAER_VEHICLE_H
