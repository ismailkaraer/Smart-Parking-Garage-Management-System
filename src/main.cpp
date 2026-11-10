#include <iostream>
#include <exception>
#include "../include/ParkingGarage.h"
#include "../include/Vehicle.h"

using namespace std;
int main() {
    ParkingGarage p1(3);
    try {
        p1.parkVehicle("34-ABC-123", "Ismail", 'C');
        p1.parkVehicle("34-MT-456", "Ismail", 'M');

        p1.displayAllVehicles();

        p1.exitVehicle("34-ABC-123", 4);

        p1.displayAvailableSpots();

        p1.exitVehicle("34-MT-456", 4, 10.00);

        cout << "Total Revenue: " << p1.getTotalRevenue() << " TL" << endl;
        cout << "Total Vehicles Created: " << Vehicle::getTotalVehicles() << endl;

        p1.exitVehicle("34-XYZ-999", 4);
    }
    catch (exception& e) {
        cout << "ERROR: " << e.what() << endl;
    }
    return 0;
}
