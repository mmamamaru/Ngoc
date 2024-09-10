/*
This file includes calling functions and include header functions
*/
#include <iostream>
#include <string>
#include <cctype>

using std::string, std::cout, std::cin;

class Member{
private:
    string name;
    string password;
    string fullname;
    string email;
    int IDnum;
protected:
    int phoneNum;
    int creditPoints;
public:
    // Constructors:
    Member(string name, string password, string fullname, string email, int IDnum, int phoneNum, int creditPoints);

    // Methods:
    int getCredit();

    void purchaseCredit();

    bool userRegister();
    bool isUsernameValid(string name);
    bool isPasswordValid(string password);
    bool isEmailValid(string email);

    bool login();
};

class User:public Member{
private:
    // Add score rating into each Driver
    // scoreRating passengerScore;
public:
    //Constructor
    User(/*scoreRating passengerScore*/ string name, string password, string fullname, string email, int IDnum, int phoneNum, int creditPoints);

    void updateProfile();
};

class Drivers:public Member{
private:
    // Add score rating into each Driver
    // scoreRating driverScore;
public:

};
