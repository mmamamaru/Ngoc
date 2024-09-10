#ifndef CARPOOL_H
#define CARPOOL_H

#include <string>
#include "Vehicle.h"  // Define vehicle class
using namespace std;

class Carpool {
private:
    string departLoca;             // Departure location
    string destination;            // Destination location
    string date;                   // Date of the carpool
    double departTime;             // Departure time
    double estimatedDuration;      // Estimated duration
    double creditsPerPass;         // Contribution credit points per passenger
    Vehicle vehicle;               // Vehicle information


public:
    // Constructor
    Carpool(string departLoca, string destination, string date,
            double departTime, double estimatedDuration, double creditsPerPass,
            Vehicle vehicle);

    // Method: set the contribution credit points per passenger
    void setCreditPerPass(double amount);

    // Method: check if guests have enough credit points to book
    bool bookingValid(int numPassengers, double userCreditPoints) const;  // Renamed from canBook

    // Method: input carpool details and vehicle information
    void listingDetails();
};

#endif
