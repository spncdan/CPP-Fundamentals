// CIS 3100 3/20/24

// File Operations (Editing content of pre-existing txt file)

#include <iostream>
// Always include fstream for file operation
#include <fstream>

using namespace std;

/* content of scores.txt 

123 700 750 600
456 741 541 800
789 720 750 790
901 658 800 750

*/

int main(){

    // When bringing data into the program use ifstream
    ifstream inFile("/Users/danielandrews/Desktop/CIS 3100/scores.txt");

    // Attempting to open file 
    // ! = not
    if(!inFile){
        cout << "Unable to open file for reading" << endl;
        return 1; // Returning an error code
    }

    // Creation of variables
    int id; // first column 
    double reading, writing, math; // second, third, and fourth columns
    double average;

    // inFile operator allows us to gather variables from the txt file

    // Reading first line of data in from the file for each of the variables within the txt file
    // Id you do not know the amount of data in a file use a while loop to print out all of the data

    // While loop keeps running as long as you're able to read data into the program
    while(inFile >> id >> reading >> writing >> math){
        // printing id
        cout << "ID: " << id << " ";
        // printing average score in accordance to ID
        average = (reading+writing+math)/3;
        cout << "AVG score for ID: " << id << " is " << average << endl;
    };


    // Closing file (Always close file for security purposes)
    inFile.close(); 

    return 0;
}
