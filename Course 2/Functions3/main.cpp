//
//  main.cpp
//  FunctionOutputs
//
//  Created by OAA on 26/07/2022.
//

#include <iostream>


using namespace std;


// FUNCTION OUTPUTS!

// METHOD 1: INPUT AND OUTPUT PARAMETERS

// Doing the same thing as return, without returning
// Since output is a reference is will be modified directly.
void max_str(const string& input1, const string& input2,
             string& output){
    if (input1 > input2) {
        output = input1;
    } else {
        output = input2;
    }
}

// Typically references are preferable, and inputs typically shouldn't be changed


void max_int(int input1, int input2, int* output) {
    if (input1 > input2){
        *output = input1;
    } else {
        *output = input2;
    }
}



// METHOD 2: RETURN


// Sometimes, however, the compiler might optimise by not returning by value but returning by reference to save space and not copy too much. For string, for example as int and other types are very small.




// FUNCTION OVERLOADING
/* Compiler chooses the most appropirate data type -> hence function can work with any return/input types

 Ways of function overloading: order, number, types
 
 What makes the function unique is name and the parameters! Return type is irrelevent.
 
 */


int max(int a, int b) {
    return (a > b)? a : b;
}

double max(double a, double b) {
    return (a > b)? a : b;
}

string_view max(string_view a, string_view b) {
    return (a > b)? a : b;
}







int main() {
    
    string output;
    
    max_str("Casablanca", "Vampire", output);
    
    cout << output << endl;
    
    
    
    int nums[] {2, 3};
    double doubs[] {2.0, 3.0};
    string_view strings[] {"Hello", "World"};
        
    cout << max(nums[0], nums[1]) << endl;
    cout << max(doubs[0], doubs[1]) << endl;
    cout << max(strings[0], strings[1]) << endl;

    
    return 0;
}


