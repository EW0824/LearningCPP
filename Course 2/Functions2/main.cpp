//
//  main.cpp
//  Functions2
//
//  Created by OAA on 26/07/2022.
//

#include <stdio.h>
#include <iostream>
#include "compare.hpp"


// Usually its better to split function into declaration (or prototype) and definition
  

using namespace std;



// PASSING BY VALUE -> value passed to function will not be modified, but a copy of it

// PASSING BY POINTER -> avoid copies, so variable passed is modified directly

// PASSING BY REFERENCE -> like pointer, instead of passing int*, pass int&. Its slightly neater than passing by pointer





int main() {
    
    
    // ONE DEFINITION RULE
    // Definitions - variables or functions - can't show more than once. Exception is Classes, which can be in other files/translation units.
    
    double oneAndOnly{}; // This is a declaration and definition -> can't define it again -> can't even use it in another file!!
    
    
    
    // FUNCTIONS
    // Like machine. Takes input to give output.
    
    // FUNCTION DECLARATION
    
    
    
    // COMPILATION
    
    /* What happens in compilation?
     1. Preprocessing - Looking for #include, copy and paste into the file (file is called translation unit
     2. Compiler then generates object file (binary of translation unit)
     3. Linker then links all object files so the full binary code can be ran.
     3 Steps: preprocessing, compilation, linkage
    */
    
    
    // MULTIPLE FILES
    
    /*
     Have a header file
     */
    
    cout << "Max: " << max(1234, 23534568) << endl;
    cout << "Min: " << min(1234, 23534568) << endl;
    
    return 0;
}
