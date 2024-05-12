// CIS 3100 3/13/24

// Functions Continued

// Using a function to print all of the contents of ANY array

#include <iostream>
using namespace std;

// Function Prototype
void print_array(int[], int);

// Main
int main() {
    
    // Create an array with intergers 1 to 5
    int num[5] = {1, 2, 3, 4, 5};
    
    // Create another random array
    int scores[10] = {6, 3, 2, 1, 7, 9, 10, 10, 94, 2};

    print_array(num, 5);
    print_array(scores, 10);
    
    return 0;
}

// Function Definition (void = function wont return anything)
void print_array(int ary[], int n){
    
    for(int i = 0; i < n; i++){ // Will print out all integers within ANY array
        
        cout << ary[i] << " ";
        
    }
    
    cout << endl;

}
