// CIS 3100 2/5/24 - 2/7/24

// Loops in C++ (Refer to Python Version of this Code in the file "Python Example Lecture 3")

#include<iostream>
#include<cmath> // include cmat into your function to help with math functions such as pow(base, exponent)
using namespace std;

int main(){
    // Floating point number
    // Defining variables and what specifically it will store
    double x = -3; // double means that there will be decimal values
    // Declaring two empty variables which will be numerator and denominator, since x is a double it's likely these two will be double too
    double numerator, denominator;
    double y;
    
    // You can declare all of the variables above as doubles in one line as seen below
    // double numerator, denominator, y, x;
    
    // While Loop to Loop through values of x from -3 to 4.0 in intervals of 0.5
    while (x<= 4.0) {
        
        // Assigning value to the numerator
        numerator = 4 * pow(x, 3) - 12 * pow(x, 2) - 9 * pow(x, 1) + 27; // pow function will take x and a comma of the exponent amount
        
        // Assigning value to the denominator
        denominator = sqrt((5 * pow(x,2) + 2)) + 3 * abs(x - 2.5);
    
        y = numerator/denominator;
        
        // Printing what sign y is equal to
        // In C++ there is no Elif like in python
        if (y > 0)
            cout << "X = " << x << " | Y = " << y << " | Y is Positive" << endl;
        else if (y < 0)
            cout << "X = " << x << " | Y = " << y << " | Y is Negative" << endl;
        else if (y == 0)
            cout << "X = " << x << " | Y = " << y << " | Y is Zero" << endl;
        
        x += 0.5;
        
        }
    
    cout << "My first program is complete." << endl;

    return 0;
}











