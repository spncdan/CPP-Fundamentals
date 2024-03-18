
// CIS 3100 2/7/2023 - 2/14/2023

// Incrementing and Decrementing

#include <iostream>
using namespace std;

int main() {
    
    int x = 5;
    int y = 10;
    int a = 15;
    int b = 20;
    
    // ++x is know as a pre increment operator (++variable)
    cout << "The intial value of x is: " << x << endl;
    // adds 1 to x, immediately x is utilized (print statement below will be 6)
    cout << "Using pre-increment to increase x: " << ++x << endl;
    cout << " " << endl;
    
    // --------------------------------------------------------------------------------------------
    
    // let's try this again with y but post increment (variable++)
    cout << "The intial value of y is: " << y << endl;
    
    // adds 1 to y, immediately AFTER y is utilized (print statement below will still be 10)
    cout << "Using post-increment to increase y: " << y++ << endl;
    
    cout << "The value of y is now: " << y << endl;
    cout << " " << endl;
    
    // --------------------------------------------------------------------------------------------
    
    // we will now move onto pre decrement (--variable)
    cout << "The intial value of a is: " << a << endl;
    
    // subtracts 1 from a, immediately as a is utilized (print statement below will be 14)
    cout << "Using pre-decrement to decrease a: " << --a << endl;
    cout << " " << endl;
    
    // --------------------------------------------------------------------------------------------
    
    // we will now move onto post decrement (--variable)
    cout << "The intial value of a is: " << b << endl;
    
    // subtracts 1 from a, immediately AFTER a is utilized (print statement below will still be 20)
    cout << "Using post-decrement to decrease b: " << b-- << endl;
    
    // print statement below will be 19
    cout << "The value of b is now: " << b << endl;
    cout << " " << endl;
    
    // --------------------------------------------------------------------------------------------
    
    // For Loop
    
    // first value in the for loop syntax is your intial value
    for(int x = 1; x <= 10; x++) { // x <= 10 means that we want our range to go up to 10, we use x++ to increment the value of x after each loop
        
        // This will print 1 to 10 as the intial value of 1 is incrementing by 1 after each loop
        cout << x << endl;
    }
    
    // tying multiple lines of code to a control statement is done by using curly brackets
    
    // --------------------------------------------------------------------------------------------
    
    // For loop which determines odd or even numbers from inputted integer
    int p;
    
    cout << "Enter a positive integer: " << endl;
    cin >> p;
    
    if (p % 2 == 0){ // always use curly brackets to combine pieces of code.
        cout << p << " is even." << endl;
        cout << p << " is a multiple of 2" << endl;
    }
    else {
        cout << p << " is odd." << endl;
    }
    
    // Nested if statements
    
    char answer;
    
    cout << "Enter a character: " << endl;
    cin >> answer;
    
    cout << "You entered: " << answer << endl;
        
    return 0;
}
