#include <iostream>
#include <string>

using namespace std;

class BankCustomer {
private:
    string name;
    string adharNumber;
    string panNumber;
    string emailId;
    string phoneNumber;

public:
    // Compile Time Polymorphism: Constructor Overloading
    BankCustomer() {
        this->name = " ";
        this->adharNumber = " ";
        this->panNumber = " ";
        this->emailId = " ";
        this->phoneNumber = " ";
    }

    // Constructor with three parameters
    BankCustomer(string nameArg, string adharNumberArg, string panNumberArg) : BankCustomer() {
        this->name = nameArg;
        this->adharNumber = adharNumberArg;
        this->panNumber = panNumberArg;
    }

    // Constructor with five parameters (delegating to the 3-parameter constructor)
    BankCustomer(string nameArg, string adharNumberArg, string panNumberArg, string phoneArg, string emailArg)
        : BankCustomer(nameArg, adharNumberArg, panNumberArg) {
        this->phoneNumber = phoneArg;
        this->emailId = emailArg;
    }

    
    void printCustomerInfo() {
        cout << "Name: " << name << endl;
        cout << "Aadhar Number: " << adharNumber << endl;
        cout << "PAN Number: " << panNumber << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Email ID: " << emailId << endl;
    }
};

int main() {
    // Creating an object of BankCustomer class with 5 arguments
    BankCustomer obj("Krithi", "577954601080", "GIGPK1150K", "8754054289", "kiruthigamurugesan9@gmail.com");
    
    obj.printCustomerInfo();
    
    return 0;
}
