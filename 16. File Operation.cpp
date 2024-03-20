// CIS 3100 3/20/24

// File Operations (Creating a txt file in program directory and writing contents of new file)

#include <iostream>
// Import fstream library to be able to commence file operation in C++
#include<fstream>
using namespace std;

int main() {
    
    // Creation of an external file (creating an object)
    // ofstream is for exporting data outside of the current program
    // Creates a file named "example.txt" in the folder which the program is in
    ofstream outFile("example.txt");
    
    // Checking if outFile is opened and if so printing "Hello" into the file
    if(outFile.is_open()) {
        // Printing "Hello World!" into file
        outFile << "Hello" << endl;
        
        //Closing File afterwards
        outFile.close();
    }
    else{
        // If file is not opened give an error in the terminal
        cout << "Unable to open file" << endl;
    }
    
    return 0;
}
    
 