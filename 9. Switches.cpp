// CIS 3100 3/12/2024

/*

    Building a simple calculator in c++ which performs +, -, *, /, % on two numbers.

    Prompts user to enter the first number, followed by the operation followed by the second number,

    Print's Result.

*/

#include <iostream>
using namespace std;

int main() {
    
    // declaring variables
    int num1, num2, result;
    char operation;

    cout << "Enter the first number: " << endl;
    cin >> num1;
    
    cout << "Enter the Operation (+, -, *, /, or %): " << endl;
    cin >> operation;
    
    cout << "Enter the second number: " << endl;
    cin >> num2;
    
    switch(operation) { // Will have all of the cases for each operator as a case.
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '%':
            result = num1 % num2;
            break;
        default: // Prevents result from being unintialized along with giving an error if operatoration was inputted incorrectly.
            result = 0;
            cout << "Invalid Operation Input." << endl;
    }
    
    cout << num1 << " " << operation << " " << num2 << " = " << result << endl;

    return 0;
}

// Switches are NOT Loops
