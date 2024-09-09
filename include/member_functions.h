/*
This file includes calling functions and include header functions
*/
#include <iostream>

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


    // Methods:
    int getCredit(){
        return creditPoints;
    }

    void purchaseCredit(){
        int creditPurchase;
        cout << "How many credit you want to purchase: "; cin >> creditPurchase;
        creditPoints = creditPurchase;
        cout << "Purchased credit successfully!\n";
    }
};

class User:public Member{
private:
    scoreRating passengerScore;

};

class Drivers:public Member{
private:
    scoreRating driverScore;

};

class scoreRating{
private:
    int score;

public:
    void setScore(int newScore){
        score = newScore;
    }
};
