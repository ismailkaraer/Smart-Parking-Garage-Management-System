//
// Created by İsmail Karaer on 10.11.2026.
//

#ifndef CMPE261_PARKINGGARAGE_ISMAILKARAER_PARKINGGARAGE_H
#define CMPE261_PARKINGGARAGE_ISMAILKARAER_PARKINGGARAGE_H
#include <string>
using namespace std;

class Vehicle;

class ParkingGarage {
private:
    Vehicle* parkingSpots[10];
    int capacity;
    double totalRevenue;
    void applyDiscount(double &fee, double discount);
public:
    ParkingGarage(int capacity);
    void parkVehicle(string plateNumber, string ownerName, char type);
    int searchVehicle(string plateNumber);
    void exitVehicle(string plateNumber, int hours);
    void exitVehicle(string plateNumber, int hours, double discount);
    void displayAllVehicles();
    void displayAvailableSpots();
    double getTotalRevenue();
    ~ParkingGarage();
};


#endif //CMPE261_PARKINGGARAGE_ISMAILKARAER_PARKINGGARAGE_H
