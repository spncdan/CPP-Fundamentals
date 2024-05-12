// CIS 3100 2/28/24

// Arrays

#include <iostream>
using namespace std;

int main() {
    
    // Array of integers with 6 integers, inside is empty as nothing is being called within
    int numbers[6]; // C++ equavalent of a list in Python, you cannot put multiple different types of elements [1, cat, 10.2]
    
    // Inserting elements into a new array being called
    int values[6] = {1, 2, 3 , 4, 5, 6};
    
    // Printing value of specific value from an existing array
    cout << values[0] << endl; // This will print out 1 from the values array (1)
    
    // Now we can create a new array which will use doubles
    double scores[6];
    
    // Here is how we can manually input values into the empty array above
    scores[0] = 1;
    scores[1] = 2;
    scores[2] = 3;
    scores[3] = 4;
    scores[4] = 5;
    scores[5] = 6;
    
    // In C++ you cannot call an array in one line, as you'd need to create a for loop
    for(int i = 0; i < 6; i++)
        cout << scores[i] << endl;
    
    // i = 0, and check if i is less than 6, and then increment i each time the loop reruns until i exceeds 6
    

    return 0;
}
