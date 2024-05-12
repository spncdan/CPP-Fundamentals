// CIS 3100 5/1

// Pointers and Dynamic Memory Management

#include <iostream>
#include <cmath>
using namespace std;

// Managing memory in C++ is very important as if you don't do it then it can cause a program to run until it crashes or become inefficient

// Memory leaks are when things go out of control and fill up the memory of the computer device

// A pointer is a variable that stores memory address of another variable
// Unlike normal variables that store data directly, pointers will store the location of where the data is held in memory
// Essential for dynamic memory management

// Pointers allow flexibility to manipulate memory directly and is crucial for performance-critical applications.
// Points allow you to work with these addresses, enhancing control over how data is organized and accessed.

int main(){
    
    int x = 10; // Declaration of an integer variable
    int* ptr = &x; // Declare a pointer and assign it the address of x
    // The '*' after int means that you are declaring a pointer variable
    // The '&' is a reference parameter which is used to get the address of the variable
    // 'ptr' now stores the memory address of x
    
    cout << "Value of x: " << x << endl; // This will output the value of x
    cout << "Address stored in ptr: " << ptr << endl; // This will output the address of x (where you can find it in memory)
    
    *ptr = 20; // Using *ptr to change value of x, changing the ptr changes x
    // The asterisk indicates that ptr is a pointer to an integer
    cout << "New value of x: " << x << endl;
    cout << "Address stored in ptr is still: " << ptr << endl;
    
    // Basic syntax of a pointer is as shown below
    // Declaration: type *point_name; (int* ptr;)
    // Initialization: pointer_name = &variable; (int var = 5; ..... int* ptr = &var;
    // The & operator is used to obtain the address of a varibale while * (dereference operator) is used to access the value at the address stored in a pointer.
    
    // Mistakes:
    // Using a pointer before it is assigned an address is dangerous as it leads to undefined behavior because ptr may point to a random memory location
    // Setting a pointer directly to an integer value such as int *ptr = 10; is an example of bad practice
    // Unpredictable behavior leads to the program not doing what it is intended to do consistently
    
    int value = 5;
    int* ptr3 = nullptr; // It is good practice to initialize pointers to nullptr to ensure it doesn't point to some unintended memory location.
    ptr = &value; // Then assign address of value to ptr to ensure consistency
    
    // Dereferencing pointers to access/change value
    // You will use the '*' operator
    
    int value1 = 5; // declaring value
    int* ptr4 = &value1; // storing value1 into address of ptr4
    int currentValuee = *ptr; // new variable which retrieves the value stored in value1 using ptr4
    
    // Changing value:
    *ptr = 10; // (changes value contents to 10 through *ptr)
    
    // Dereferencing ptr accesses the value at the memory address it points to.
    
    // Pointer Arithmetic involves adding or subtracting integers from pointers
    
    int arr[3] = {0, 1, 2};
    int *ptr5 = arr;
    ptr5 += 2; // (points to arr[2])
    
    // Adding to or subtracting from a pointer moves its address by the size of the type it points to.
    // Different pointer types move by different increments, for example:
    
    char *cPtr;
    int *iPtr; // (cPtr++ increments by 1 byte, iPtr++ by typically 4 bytes)
    
    // The size of the type determiens how much te address is adjusted when performing arithmetic.
    
    int numbers[5] = {0, 1, 2, 3, 4};
    int *p = numbers; // Point to the first element
    *(p + 3) = 10; // Set the fourth element to 10
    // int offset = p + 4 - p; // Calculates offset in the array
    // Offset is the memory address of where the particular index is located
    // Allows us to compute distance between pointers
    
    // Generally in C++, arrays are closely related to pointers.
    // An array name acts as a constant pointer to the first element.
    // This means that arrya names can be used much like pointers in expressions.
    
    // Using pointers to access array elements
    int arr1[] = {10, 20, 30}; // declaration of arr1
    int *ptr6 = arr1; // storing arr1 in ptr6 memory address
    int seconditem = *(ptr6 + 1); // Accesses the second element of the array
    
    for(int i = 0; i < 3; i++){
        cout << arr1[i] << " ";
        cout << endl;
    }
    
    // Example of pointer and array interchangeability
    int number[3] = {10, 20, 30}; // declaration of int number[3] array
    int *p1 = numbers; // assigning number[3] array to memory address of pointer *p1
    for (int i = 0; i < 3; i++){
        cout << "Element " << i << ": " << *(p + i) << endl;
        cout << "Element " << i << ": " << p[i] << endl; // Same as above
    }
    
    // Pointer to a pointer are usually declared as type** ptrToPtr;
    // Example:
    int **ptrToPtr; // Here, ptrToPtr can store the address of a pointer to an integer.
    // Pointers to pointers are mainly used for two-dimensional arrays, modifications of points, building complex data structures, and also adding layers of flexibility needed in advanced programmign scenarios.
    
    int o = 10; // Declaring int variable o as 10
    int *pointer1 = &o; // Intializing pointer to access integer value in memory access.
    
    cout << "Value of o: " << *pointer1 << endl;
    
    int **ptr1 = &pointer1; // ptr1 will act as the pointer to the pointer, pointer1
    **ptr1 = 30; // therefore if we are to change **ptr1 to 30 it will change the value of *pointer1 which is variable o;
    
    cout << "New value of o: " << *pointer1 << endl; // Outputs 30
    
    // Dynamic Memory Management allows programs to obtain memory at runtime.
    // Essential for scenarios where the size of memory needed is not known at compile time.
    
    // Operator 'new' is used for allocation of memory
    // Example:
    
    int *pointer = new int;
    
    int* ptrex = new int; // allocates memory for an integer
    
    // The new operator allocates memory on the heap and return a pointer to it
    
    // Operator 'delete' is used to deallocate memory
    // Crucial to delete any dynamically allocated memory to prevent memory leaks
    delete ptrex; // frees the allocated memory for ptrex specifically
    
    int *array = new int[5]; // Allocation of memory for an array of 5 integers
    
    for (int i = 0; i < 5; i++){
        array[i] = i * 2; // Initilizing array elements using for loop
    }
    
    delete[] array; // Deallocating the array once done with array to free up memory space
    // If you don't deallocate the array you are at risk of a memory leak (known as dangling pointer)
    
    // Example of memory leak
    
    /* int *leakyFunction(){
     int *newInt = new int(10);
     return nullptr; // newInt is not returned or deleted
     } */
    
    // Example of non memory leak
    
    /* int* safeFunction() {
     std::unique_ptr<int> safeInt(new int(10));
     return nullptr; // Memory is automatically managed
     } */
    
// Here is example of using new and delete in Object Oriented Programming
    
class Widget {
    int *data;
public:
    Widget(int size) { data = new int[size];} // Allocate array
    ~Widget() {delete[] data;} // Free allocated memory
};
     
// Destructor '~' operator is the removal of an object class and therefore we want to deallocate the memory for that removed object as seen above.
    
// Things we don't want:
// Memory Leaks : Forgetting to free memory with 'delete'
// Dangling Pointers : Using pointers that refer to freed memory.
// Double Free Errors : Freeing memory more than once.
    
// Preventative Measures:
// Always intialize pointers to 'nullptr'
// Use RAII (Resource Acquistion is Intialization) principles, such as smart pointers, to maange memory.
// Regularly review and test code to detect and fix leaks early.
    
return 0;
    
}
