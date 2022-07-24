//
//  main.cpp
//  Practice
//
//  Created by OAA on 20/07/2022.
//

#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

 
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    // Input / Output manipulators
    
    /*
     flush - send output buffer to the terminal
     setw - set width
     justification - whether aligned to right or left
     setfill - setting fill character
     boolalpha - turn 1,0 to true,false
     showpos - shows positive sign
     dec, oct, hex
     showbase -> decimal won't have anything, hex will have '0x', oct will have '0'
    */

     
    // Weird integral types -> cannot do arithmetics on char and short int -> but compiler can automatically convert
    
    short int var1 = 20;
    short int var2 = 30;
    
    cout << sizeof(var1) << sizeof(var2) <<endl;
    cout << sizeof(var1+var2) << endl;
    
    
    // Ternary expression -> shorthand of if statments
    
    int a = 20;
    int b = 30;
    
    int max = (a > b)? a : b;
    cout << "Bigger of 20, 30: " << max << endl;
        

    
    // Array
    
    int scores[10];
    
    /*
    // size_t i{0} is pretty much same as int i = 0! size_t is just more professional
    // Range-based for loops
    for (size_t i{0}; i<10; i++) {
        scores[i] = i * 3;
    }

    for (size_t i{0}; i<10; i++) {
        cout << "scores[" << i << "]: " << scores[i] << endl;
    }

    // character arrays can be printed straight away without loops
    
    char charMessage[6] {'H', 'e', 'l', 'l', 'o','\0'}; // need \0 at the end!
    cout << charMessage << endl;
    */
    
    char stringMessage[] {"Hello"};
    cout << stringMessage << endl;
    
    // DO NOT GO OVER ARRAY BOUNDS!
    
    return 0;

}
 


