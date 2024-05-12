// CIS 3100 3/13/24

// Functions

/*

D - DO NOT
R - REPEAT
Y - YOURSELF

Functions allows you to store code so you don't need to keep repeating yourself
 
*/

#include <iostream>
using namespace std;

// Function Prototype (You only need a prototype if the function is after the main function)
int add_two_numbers(int, int); // parameters must be the same among all function calls
    
int main() {
    // Defining our variables and data types
    int num1, num2, sum = 0;
    
    cout << "Enter first number: " << endl;
    cin >> num1;
    
    cout << "Enter second number: " << endl;
    cin >> num2;
    
    // Function being called
    sum = add_two_numbers(num1, num2);
    
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}


// Function Definition (YOU MUST DEFINE FUNCTION DATA TYPE FIRST)
int add_two_numbers(int x, int y){ // be sure to specify within the parameters, the data type that the function is recieving
    
    return x + y; // we return our parameters after the function
}

