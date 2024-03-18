// CIS 3100 1/31/2023 

// 1 : Printing 'Hello World!' & 'Welcome to CIS 3100!' 

#include<iostream>
using namespace std; // Allows us to write things to screen with less writing

// Without namespace you would have to type things such as std:cout each time

int main() {

    cout << "Hello World! \n"; // Use \n here to make sure it you can have multi-lined comments, you can use endl; here as well for the same effect
    cout << "Welcome to CIS 3100!";

// 2 : Prompt the user to enter two integers, and output the sum of the integers 

// First you need to declare your variables 

    int num1; // int means this will be an integer since you need to be specific
    int num2;
    int sum;

// Prompt user to enter first variable using a c-out and c-in statement 

    cout << "Enter the first number:" << endl; // Cout means console output 
    cin >> num1; // cin means console input
    cout << "You Entered: " << num1 << endl; // This w  ill output back to the user what they inputted

    cout << "Enter the second number:" << endl; // Cout means console output 
    cin >> num2;
    cout << "You Entered: " << num2 << endl; // This will output back to the user what they inputted 

    sum = num1 + num2; // Defining what the sum variable should have
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl; 
 
return 0; // Means that the function was returned successfully 

}

/* Above is an example of a skeleton code,

Without namespace you would have to type things such as std:cout each time you want to print something,

In C++ all of your code must be within a function, hence the use of main() */
