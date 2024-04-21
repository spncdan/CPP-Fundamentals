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
        // in order to access a private member you must use a getter and setter
        
    // Public class properties can be accessed anywhere
    public:
        string name;
        int age;
    
    /* Protected is a third access modifer where it is only accessed within class and derived classes (inherited)
     protected:
        int x;
        int y;
     */
    
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
// Derived Employee Class
class Employee : public Person {
    public:
    double salary;
    int emplid;
    string job_title;
    
    // Constructor
    Employee(string name, int age, string address, int zipcode, string occupation, double salary, int emplid, string job_title)
    : Person(name, age, address, zipcode, occupation),
    salary(salary), emplid(emplid), job_title(job_title){
    }
    // Getters
    double get_salary(){
        return salary;
    }
    
    int get_emplid(){
        return emplid;
    }
    
    string get_job_title(){
        return job_title;
    }
    
    // Setters
    void set_salary(double new_salary){
        salary = new_salary;
    }
    
    void set_emplid(int new_emplid){
        emplid = new_emplid;
    }
    
    void set_job_title(string new_job_title){
        job_title = new_job_title;
    }
    
};

// Derived Patient class from base class Person
class Patient : public Person {
    private:
        string medical_condition;
        string medication;
    public:
    
    // Constructor
    Patient(string name, int age, string address, int zipcode, string occupation, string medical_condition, string medication)
    : Person(name, age, address, zipcode, occupation),
    medical_condition(medical_condition), medication(medication){
        //insert code to run when the constructor is called
    }

    // Getters
    string get_medical_conditon(){
        return medical_condition;
    }
    
    string get_medication(){
        return medication;
    }
    
    // Setters
    void set_medical_condition(string new_medical_condition){
        medical_condition = new_medical_condition;
    }
    
    void set_medication(string new_medication){
        medication = new_medication;
    }
    
};

// Virtual functions are those which are expected to override (replace) a method in a derived class.

// Overriding: When a child class inherits a method from a parent class, the child class wishes to change the behavior or that method.

// Example of Polymorphism

class Animal {
public:
    virtual void makeSound(){ // makeSound is a virtual method because we expect that when a child class inherits the method they will change the behavior
        cout << "Sound sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override { // Dog class overrides the makeSound() method to say "Woof" when called upon in terms of the Dog class.
        cout << "Woof" << endl;
    }
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
    
    // Instatiating an object using the derived employee class of the person class in the order specified in the subclass above
    Employee e1("Joshua", 32, "594 New Street", 12945, "Cybersecurity Engineer", 59493.34, 192938832, "Cybersecurity Engineer II");
    
    // Examples of using getters for the employee class
    cout << "My name is " << e1.get_name() << endl; // As you can see using the getters from the parent class of Person, is applicable here
    cout << "My age is " << e1.get_age() << endl;
    cout << "My salary is " << e1.get_salary() << endl; // Here we see getters which are unique to the employee class
    cout << "My EMPLID is " << e1.get_emplid() << endl;
    cout << "My job title is " << e1.get_job_title() << endl;
    
    // Examples of using setters for the employee class
    e1.set_job_title("Senior Cybersecurity Engineer");
    cout << "My new job title is " << e1.get_job_title() << endl;
    
    // Instantiating an object from the derived patient class of the person class in order specified in the subclass.
    Patient o1("Nanami", 34, "102 Pine Street", 12933, "Janitor", "Pulled Muscle", "Aspirin");
    
    
    
    return 0;
}

 
 
 
 

