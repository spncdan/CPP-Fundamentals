// CIS 3100 1/29/24

/* C++ allows for high performance applications

Popular in finance for high-frequency trading systems

C++ allows low-level manipulation capabilities but added Object-Oriented-Programming features

C++ has more control over hardware

The closer the language is to Machine Code, the more efficient the language

The higher the level of the language, the more understandable it is and easier to learn which is why there are additional steps

Python <- C++, Java <- Fortran, C, Pascal <- Assembly Language <- Machine Language

Machine Language is binary such as "011001010100010100001"

Assembly Language are programs such as your power button turning on your computer

Fortran, C, Pascal are lower level languages before C++ & Java

Finally Python is higher than C++ & Java but is slower

Compilers will take the code written and translate it into assembly language which is then translated into machine code

High-Level Code (E.G Python) <- Compiler/Incompiler <- Object Code <- Linker <- Binary Code (Machine Code)

Below is how you would print "Hello World!" in C++ as opposed to python's print("Hello World!") */

#include <iostream> // iostream is the standard heading for input and output operations in C++ 

int main() { // This is the main function as officially the start of the program */

    std::cout << "Hello, World!" << std::endl; // std::cout is used for outputting to the console and << is the stream inserting operator 
    return 0; // finally you return 0 to indicate successful completion of the program and is the exit status returned to the operating system

}

// We must use std:cout and std:endl due to not having 'using namepsace std;' below iostream which simplifies the code 



