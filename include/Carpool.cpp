#include <iostream>
#include <Carpool.h>
using namespace std;

// Constructor initialization
Carpool::Carpool(string departLoca, string destination, string date,
                 double departTime, double estimatedDuration, double creditsPerPass,
                 Vehicle vehicle) : departLoca(departLoca), destination(destination), date(date),
                 departTime(departTime), estimatedDuration(estimatedDuration),
                 vehicle(vehicle), creditsPerPass(creditsPerPass) {}

// Method: set the contribution credit points per passenger
void Carpool::setCreditPerPass(double amount) {
    creditsPerPass = amount; //amount is the numer of credit points the driver require
}

// Method: check if a single passenger has enough credit points to book
bool Carpool::bookingValid(double userCreditPoints) const {  //Define tạm cái userCreditPoints ở đây để xét
    if (userCreditPoints >= creditsPerPass) {
        return true;
    } else {
        cout << "Oopsie! You need " << (creditsPerPass - userCreditPoints)
             << " more credit points to book this carpool." << endl;
        return false;
    }
}

// Method to input carpool details and vehicle information
void Carpool::listingDetails() {
    cout << "Want to list a new Carpool? Fill in the form below!" << endl;

    cout << "Enter departure location: ";
    getline(cin, departLoca);

    cout << "Enter destination: ";
    getline(cin, destination);

    cout << "Enter date (Day/Month/Year): ";
    getline(cin, date);

    cout << "Enter departure time (e.g. 13h30 = 13.30): ";
    cin >> departTime;

    cout << "Enter estimated duration (e.g. 2 hours 30 minutes = 2.5 hours): ";
    cin >> estimatedDuration;

    cin.ignore();  // Ignore the newline character left in the input

    cout << "Enter contribution per passenger (in credit points): ";
    cin >> creditsPerPass;

    // Print the inputted information
    cout << "\nCarpool Details created successfully! View the details:\n";
    cout << "Departure Location: " << departLoca << endl;
    cout << "Destination: " << destination << endl;
    cout << "Date: " << date << endl;
    cout << "Departure Time: " << departTime << endl;
    cout << "Estimated Duration: " << estimatedDuration << " hours" << endl;
    cout << "Contribution per Passenger: " << creditsPerPass << " credit points" << endl;
    cout << "Vehicle Details:\n";
    vehicle.getInfo(); //Print trước
}
