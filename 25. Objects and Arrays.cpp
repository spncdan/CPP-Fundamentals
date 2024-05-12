// CIS 3100 5/8

/* Objects and Arrays */

#include <iostream>
#include <string>

using namespace std;

// Create a class for a car that has the following properties : brand, model, year
class Car{
    private:
        string brand;
        string model;
        int year;
    public:

    // Constructor to initialize the car with a model and a year
    Car(string b, string m, int y): brand(b), model(m), year (y){
        // Will run each time an object is created
        cout << "New object added to car class" << endl;
    }
    
    // Getters
    string get_brand(){
        return this->brand;
    }
    
    string get_model(){
        return this->model;
    }
    
    int get_year(){
        return this->year;
    }
    
    // Setters
    void set_brand(string new_brand){
        this->brand = new_brand;
    }
    
    void set_model(string new_model){
        this->model = new_model;
    }
    
    void set_year(int new_year){
        this->year = new_year;
    }
    
    /* 
     Destructor
     A destructor is a special method that is 
     called when an object is destroyed/deleted.
     */
    
    // Runs when the program is terminated or ends, they delete in the order of "last in, first out"
    ~Car(){
        cout << "Deleting..." << this->model << endl;
    }
    
};


int main(){
    
    // Creating an array of Car objects
    Car dealership[5] = {
        // Adding objects to the Car class and filling the array
        Car("Tesla", "Model X", 2023),
        Car("Ford", "GT", 2005),
        Car("Lamborghini", "Gallardo", 2008),
        Car("Nissan", "GT-R", 2010),
        Car("Bentley", "Super Continental", 2021)
    };
    
    cout << endl;
    // Access and display each car in the array
    for(int i = 0; i < 5; i++){
        cout << "Brand: " << dealership[i].get_brand() << endl;
        cout << "Model: " << dealership[i].get_model() << endl;
        cout << "Year: " << dealership[i].get_year() << endl;
        cout << endl;
        
    }
    
    return 0;
}
