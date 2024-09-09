/*
This file includes classes and functions for member parent class and child classes.
*/
#include <iostream>
#include <member_functions.h>

/*Class Member*/
//Constructor of class Member
Member::Member(string name="", string password="", string fullname="", string email="", int IDnum=0, int phoneNum=0, int creditPoints=0)
    : name(name), password(password), fullname(fullname), email(email), IDnum(IDnum), phoneNum(phoneNum), creditPoints(creditPoints) {}

//Define functions
int Member::getCredit(){
        return creditPoints;
}

void Member::purchaseCredit(){
    int creditPurchase;
    cout << "How many credit you want to purchase: "; cin >> creditPurchase;
    creditPoints += creditPurchase;
    cout << "Purchased credit successfully!\n";
}

bool Member::userRegister(){
    cout << "Registering a new user:\n";

    //Username input
    do{
        cout << "Enter username: ";
        getline(cin, name);
    }while(!isUsernameValid(name));

    //Password input
    do{
        cout << "Enter password: ";
        getline(cin, password);
    }while(!isPasswordValid(password));
    
    
    //Full name input
    cout << "Enter full name: ";
    cin.ignore();
    getline(cin, fullname);

    //Email input
    do{
        cout << "Enter email: ";
        getline(cin, email);
    }while(!isEmailValid(email));
    
    //ID/Passport number input
    cout << "Enter ID/Passport number: ";
    cin >> IDnum;

    //Phone number input
    cout << "Enter phone number: ";
    cin >> phoneNum;

    //Charge 10 credit points
    while(creditPoints < 10){
        purchaseCredit();
    }
    creditPoints -= 10;
    cout << "Registration complete. 10 credit points has been charged.\n";
    return true;
}

bool Member::isUsernameValid(string name){
    for(char c : name){
        if(!isalnum(c)){ //check if the character is not alphanumeiic
            cout << "Username can only contains letters and numbers.\n";
            return false;
        }
    }
    return true;
}

bool Member::isPasswordValid(string password){
    if(password.length() < 6){
        cout << "Password must be at least 6 characters long.\n";
        return false;
    }

    bool hasDigit = false, hasUpper = false, hasSpecial = false;
    for(char c : password){
        if(isdigit(c)) hasDigit = true;
        if(isupper(c)) hasUpper = true;
        if(ispunct(c)) hasSpecial = true;
    }

    if (!hasDigit) {
        cout << "Password must contain at least one digit.\n";
        return false;
    }
    if (!hasUpper) {
        cout << "Password must contain at least one uppercase letter.\n";
        return false;
    }
    if (!hasSpecial) {
        cout << "Password must contain at least one special character.\n";
        return false;
    }
    return true;
}


bool Member::isEmailValid(string email){
    int atPosition = email.find('@');
    int dotPosition = email.find('.');

    if(atPosition == string::npos || dotPosition == string::npos || atPosition > dotPosition){
        cout << "Invalid email format. It must contain '@' and '.' in the correct positions.\n";
        return false;
    }
    return true;
}

bool Member::login(){
    string inputName, inputPassword;

    cout << "Enter username: ";
    getline(cin, inputName);

    cout << "Enter password: ";
    getline(cin, inputPassword);

    // Check if the provided username and password match the stored values
    if (inputName == name && inputPassword == password) {
        cout << "Login successful! Welcome, " << fullname << ".\n";
        return true;
    } else {
        cout << "Login failed! Incorrect username or password.\n";
        return false;
    }
}

/*Class User*/
User::User(scoreRating passengerScore, string name, string password, string fullname, string email, int IDnum, int phoneNum, int creditPoints)
    : passengerScore(passengerScore), Member(name, password, fullname, email, IDnum, phoneNum, creditPoints) {}

void User::updateProfile(){
    cout << "Profile Information:\n";
    cout << "Username: " << name << endl;
    cout << "Full Name: " << fullname << endl;
    cout << "Email: " << email << endl;
    cout << "ID/Passport Number: " << IDnum << endl;
    cout << "Phone Number: " << phoneNum << endl;
    cout << "Credit Points: " << creditPoints << endl;
}