// CIS 3100 5/16/23

/* Friend Functions 

- Doesn't belong to class
- It is granted access to the class' prviate and protected members
- Useful for operations that require access to the internal state of class
- Declared within the body and are specified with the 'friend' keyword

*/

#include<iostream>
using namespace std;

// Creation of the Box class
class Box {

    // Private class properties (accessed within the person class only)
    private:
        double width;
    // Public class properties which can be accessed anywhere
    public:

    // Constructor
        Box(double w): width(w) {
        } 

    // Friend Function Declaration
    friend void printWidth(Box b);
    // Informs the class that the method above is a friend method.

};

// Friend Function Definition
void printWidth(Box b){
    cout << "Width of Box: " << b.width << endl;
    return;
}

int main(){

    // Instantiating the Box Class
    Box b1(23.43);

    // Utilization of the friend function
    printWidth(b1);

    return 0;
}