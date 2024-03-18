// CIS 3100 2/26/2023

// Calculate the area of a triangle
// User should be able to run the program as many times as needed
// While loops
// average area


#include <iostream>
using namespace std;

int main() {
    
    // We added a counter variable which will add 1 to the variable each time that the while loop is set to run
    double base, height, area, max = -10000000000000000;
    int counter;
    string keep_going;
    keep_going = "yes";
    counter = 0;
    double average = 0, sum = 0;
    
    // While loop allows us to keep the loop going as long as the user keeps entering yes or Yes in response to the last string
    while (keep_going == "yes" || keep_going == "Yes") {

        counter += 1;
        
        // asking user to input
        cout << "Enter the base: " << endl;
        cin >> base;
        
        cout << "Enter the height: " << endl;
        cin >> height;
        
        // finding area of triangle
        area = (base * height) * 0.5;
        
        // printing area of trianagle
        cout << "The area of the triangle is equal to " << area << endl;
        
        // adding current area calculated to sum
        sum += area;

        // maximum area computation (current area compared to current max)
        if (area >= max) {
            max = area;
        }
        
        // building functionality into program so that users don't need to debug and use visual code
        cout << "Would you like to compute the area of another triangle, type 'yes' or 'Yes' to proceed OR any other character to end the program: " << endl;
        cin >> keep_going;
        
    }
    
    // calculating average and other post statistics if counter > 0 (in case user does not input anything)
    if (counter > 0) {
        average = sum/counter;

    cout << "You ran this program " << counter << " times." << endl;
    cout << "The average area is " << average << endl;
    cout << "The maximum area is " << max << endl;


    }
    
    cout << "Thank you for using our program!" << endl;

    return 0;
}
