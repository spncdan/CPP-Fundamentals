// CIS 3100 5/6

/* Pointer Operations */

#include <iostream>
#include <memory>
using namespace std;

int main(){
    
    // create an int variable num and set it = to 42;
    int num = 42;
    
    // create a pointer and assign it to the integer variable num
    int* pnum = &num; // getting memory address off num and extracting it into pnum
    
    // create a pointer to the pointer to the integer variable num
    int** ppnum = &pnum;
    
    // printing the pnum (printing the contents of num using the pointer pnum)
    cout << "Using pointer: " << *pnum << endl;
    // going into memory and extracting the value being stored
    
    // printing to the pointer of the pointer
    cout << "Using the pointer to the pointer: " << **ppnum << endl;
    
    // pointers and arrays
    double numbers[] = {0.5, 1.5, 2.5, 3.5, 4.5};
    double* pnumbers = numbers;
    
    // increment all elements in the numbers array by 1 using pointer operations
    for(int i = 0; i < 5; i++){
        // increment each element by 1.0 using pnumber pointer
        *pnumbers += 1.0; // *pnumber allows us to access elements of the array
        cout << *pnumbers << " "; // prints out new element
        pnumbers++; // move the pointer to the next element (from 0.5 to 1.5) no * needed as we are not manipulating the element of the array
    }
    cout << endl;
    
    return 0;
}