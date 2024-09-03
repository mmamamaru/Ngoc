/*
This file includes classes and functions for member parent class and child classes.
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