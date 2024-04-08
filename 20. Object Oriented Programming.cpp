// CIS 3100 4/8/24

// Object Oriented Programming in C++

#include <iostream>
#include <fstream>
// Include string library
#include <string>

using namespace std;

// Creation of Person class (use curly brackets instead of colon)
class Person {
    
    // Private class properties
    private:
        string address;
        int zipcode;
    
    // Public class properties
    public:
        string name;
        int age;
        string occupation;
    
    // Class constructor
    Person(string address, int zipcode, string name, int age, string occupation){
        // this-> is the "self." in python
        this->address = address;
        this->zipcode = zipcode;
        this->name = name;
        this->age = age;
        this->occupation = occupation;
    }
    
    // Getters
    
};
