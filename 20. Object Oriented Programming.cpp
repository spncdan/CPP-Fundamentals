// CIS 3100 4/8/24

// Object Oriented Programming in C++

#include <iostream>
#include <string>

using namespace std;

// Define your class BEFORE int main()
// Creation of Person class (use curly brackets instead of colon)
class Person {
    
    // Defining the Person Class
    
    // Class properties are the variables within the class
    
    // Private class properties can only be accessed within the person class
    private:
        string address;
        int zipcode;
        string occupation;
    
    // Public class properties can be accessed anywhere
    public:
        string name;
        int age;
    
    // Class constructor is a special function that only defines an object in the class and is ONLY called when an object is created
    Person(string name, int age, string address, int zipcode, string occupation):
        name(name), age(age), address(address), zipcode(zipcode), occupation(occupation){
        //insert code to run when the constructor is called
        
    }
    
    // Setters allows to set and change existing object's properties
    void set_address(string new_address){
        this->address = new_address;
    }
    
    void set_zipcode(int new_zipcode){
        this->zipcode = new_zipcode;
    }
    
    void set_name(string new_name){
        this->name = new_name;
    }
    
    void set_age(int new_age){
        this->age = new_age;
    }
    
    void set_occupation(string new_occupation){
        this->occupation = new_occupation;
    }
    
    // Getters allow us to return our object's contents/property (Be sure the function type corresponds to the property type)
    string get_address(){
        return this->address;
    }
    
    int get_zipcode(){
        return this->zipcode;
    }
    
    string get_name(){
        return this->name;
    }
    
    int get_age(){
        return this->age;
    }
    
    string get_occupation(){
        return this->occupation;
    }
    
};

// Inheritance, creating new Employee class which takes from Person class

class Employee : public Person {
    public:
    double salary;
    string emplid;
    string job_title;
    
    // Constructor
    
};

// Main function
int main(){
    
    // Instantiating an object using person class in the order specified above
    Person p1("Daniel", 19, "123 Main Street", 13203, "Software Developer");
    
    // Example of using of getter
    cout << "My name is " << p1.get_name() << endl;
    cout << "My age is " << p1.get_age() << endl;
    cout << "My address is " << p1.get_address() << endl;
    cout << "My zipcode is " << p1.get_zipcode() << endl;
    cout << "My occupation is " << p1.get_occupation() << endl;
    
    // Example of using a setter to change the name to "Dan" instead of Daniel and changing the age from 19 to 20.
    p1.set_name("Dan");
    p1.set_age(20);
    
    // Example of using of getter to show the new change
    cout << "My new name is " << p1.get_name() << endl;
    cout << "My new age is " << p1.get_age() << endl;
    
    return 0;
}

