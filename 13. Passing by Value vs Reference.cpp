// CIS 3100 3/18/24

// Passing by Value vs Passing by Reference (&)

#include <iostream>

using namespace std;

// Function Prototype
void process_two_values(int, int &);

int main(){
    
    int x = 10, y = 11;
    // pass two variables to a function and then print them in the function
    
    cout << "in main: " << endl;
    cout << "x = " << x << " y = " << y << endl;
    cout << endl;

    process_two_values(x, y);
    
    cout << "Back in in main: " << endl;
    cout << "x = " << x << " y = " << y << endl;
    cout << endl;

    return 0;
}

// Defining function which takes two integers and
void process_two_values(int a, int &b){ // & is a reference parameter which allows changes within a function to be passed to main, as seen by b here being changed and being changed to main
    
    cout << "In the function: " << endl;
    cout << "a = " << a << " b = " << b << endl;
    
    a = 20; // changes within this will not correlate to changes in x due to the reference parameter NOT being present
    b = 30; // changes within this will correlate to changes in y due to the reference parameter (&), allows y to be modified
    
    // Any changes made to b is made to x if there is a reference parameter present
    
    cout << "a = " << a << " b = " << b << endl;
    cout << endl;
    
    return; // Good practice to do this return even if void function
    
}

// without a reference parameter you passing the value
// with reference you are passing the memory address (location) and thus modifying the variable within the memory

