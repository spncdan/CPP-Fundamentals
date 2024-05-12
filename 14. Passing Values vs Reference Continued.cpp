// CIS 3100 3/18/2024

// Passing by Value vs Passing by Reference (&) Continued

#include <iostream>

using namespace std;

// Function Prototype
void PrintALot(int, char&);

int main(){
    
    // Defining our variables
    char symbol = '*';
    int number = 4;
    
    cout << symbol << "\t" << number << "\t" << symbol << endl;
    PrintALot(number, symbol);

    // Afterwards we can see how this changes the value of symbol due to the function below changing it's value where symbol is attached to a reference parameter
    cout << symbol << "\t" << number << "\t" << symbol << endl;
    
    return 0;
}

void PrintALot(int x, char &c){
    
    int i;
    x++;
    
    for(i = 0; i < x; i++){
        cout << c; // If you modify c you need to modify symbol in the main function due to reference parameter
    }
        cout << endl;
        if(x < 6){
            c = '%'; // This will modify symbol in the main function (changes in the memory)
    }
    
    return;
}

