// CIS 5/8

/* Structures Part 1 */

#include <iostream>
#include <string>

using namespace std;

// Structure for a book (title, author, and price)
struct Book{
    string title;
    string author;
    double price;
};

// Creating a structure for student data (name, age, avg_grade)
struct Student{
    string name;
    int age;
    double avg_grade;
};

int main(){

    // How to use Book Structure
    Book twilight;
    twilight.title = "New Moon"; // Setting title
    twilight.author = "Stephanie B."; // Setting author
    twilight.price = 24.99; // Setting price

    // Print the contents of the book
    cout << "Book Title: " << twilight.title << endl;
    
    // Print the author of the book
    cout << "Author: " << twilight.author << endl;
    
    // Print the price of the book
    cout << "Price: $" << twilight.price << endl;
    
    cout << endl;
    
    // Creating array of student structures
    Student roster[3]; // three students on the roster
    // Every element in the array must be a structure
    
    // Student #1
    roster[0].name = "Alice";
    roster[0].age = 23;
    roster[0].avg_grade = 90;
    
    // Student #2
    roster[1].name = "Daniel";
    roster[1].age = 20;
    roster[1].avg_grade = 85;
    
    // Student #3
    roster[2].name = "Jing";
    roster[2].age = 34;
    roster[2].avg_grade = 95;
    
    // Print the data for all of the students from the array
    for(int i = 0; i < 3; i++){
        cout << "Student "<< i + 1 << "'s Name: " << roster[i].name << endl;
        cout << "Student " << i + 1 << "'s Age: " << roster[i].age << endl;
        cout << "Student " << i + 1 << "'s Average Grade: " << roster[i].avg_grade << endl;
        cout << endl;
    }

    return 0;
}
