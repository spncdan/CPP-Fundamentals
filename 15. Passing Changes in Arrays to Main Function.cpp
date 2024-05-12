// CIS 3100 3/18/2024

// Passing Arrays to Functions

#include <iostream>

using namespace std;

// Function Prototype
void PrintArray(int[], int);
void ModifyArray(int[]);

int main(){
    
    int matrix[5] = {1, 2, 3, 4, 5,};
    
    cout << "Before modication " << endl << endl;
    PrintArray(matrix, 5);
    ModifyArray(matrix);
    cout << "After modication " << endl << endl;
    PrintArray(matrix, 5);
    
    return 0;
}

void PrintArray(int arr[], int n){
    
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }
    
    cout << endl;
    
    return;
}

void ModifyArray(int arr[]) { // When you make a change to an array using a function, the change is permanent and therefore you do not need a reference parameter (&)
    arr[0] = 10;
    return;
}
