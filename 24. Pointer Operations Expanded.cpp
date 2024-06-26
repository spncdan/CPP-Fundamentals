// CIS 3100 5/6/24

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
    
    cout << endl;
    
    // pointers and arrays
    double numbers[] = {0.5, 1.5, 2.5, 3.5, 4.5};
    double* pnumbers = numbers;
    
    cout << "Pre-Intialized array: ";
    // increment all elements in the numbers array by 1 using pointer operations
    for(int i = 0; i < 5; i++){
        // increment each element by 1.0 using pnumber pointer
        *pnumbers += 1.0; // *pnumber allows us to access elements of the array
        cout << *pnumbers << " "; // prints out new element
        pnumbers++; // move the pointer to the next element (from 0.5 to 1.5) no * needed as we are not manipulating the element of the array
    }
    cout << endl;
    
    // dynamic Memory Allocation
    // dynamically allocate an array of 7 integers
    int* dynamicArray = new int[7];
    // create a pointer to the dynamic array
    int* temp = dynamicArray; // when creating a pointer for an array you dont need &
    
    cout << "Dynamically created array: ";
    for (int i = 0; i < 7; i++){
     *temp = i + 1; // initalizing the array with elements
       cout << *temp << " ";
      temp++; // moving to next element in array
    }
    
    cout << endl;
    
    // to find the sum of all of the elements in the dynamic array above
    // you must reset the pointer to the start of the array
    temp = dynamicArray;
    int sum = 0;
    
    for(int i = 0; i < 7; i++){
        sum += *temp;
        temp++;
    }
    
    cout << endl;
    cout << "Sum: " << sum << endl;
    cout << endl;
    
    // deallocation of memory
    delete[] dynamicArray;
    dynamicArray = nullptr; // set pointer to nullptr to complete and ensure deallocation while also preventing dangling pointer issues.
    
    // smart pointers
    // use unique_ptr for automatic memory management
    unique_ptr<int[]> smartArray(new int [7]);
    // c++ compiler does memory management for us
    
    // initializing the array with elements
    for(int i = 0; i < 7; i++){
        smartArray[i] = i + 1;
    }
    
    // find sum of values in the array
    sum = 0;
    for(int i = 0; i < 7; i++){
        sum += smartArray[i];
    }
    
    cout << "Sum with smart pointer: " << sum << endl;
    
    // smartArray will be automatically deleted with us needing to deallocate.
    
    return 0;
}

