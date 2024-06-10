// CIS 3100
// 5/13/24

// Static Methods in C++

#include<iostream>
using namespace std;

class Counter {
    public:
        // Declaration of Static Variable
        static int count;

        // Constructor runs each time an object is created.
        Counter(){
            count++;
        }
};

class MathOperations {
    public:
        static int add(int a, int b){ // Static method
            return a + b;
        }
};

// Define and Initialize the Static Variable
int Counter::count = 0;

int main() {

    // Instantiating three objects
    Counter c1;
    Counter c2;
    Counter c3;

    // Printing this should give us 
    cout << "Number of Objects Created: " << Counter::count << endl;

    // Doing calcualtion with static method
    cout << "Sum of 5 and 3: " << MathOperations::add(5, 3) << endl;

    return 0;
}
