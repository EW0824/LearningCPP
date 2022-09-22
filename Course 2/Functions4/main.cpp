//
//  main.cpp
//  Functions4
//
//  Created by OAA on 26/07/2022.
//

#include <iostream>


using namespace std;




//
// Function Templates -> works great for function overloading
//
    

// This is not C++ code! Just a blueprint for compiler to generate different case, replacing T with the actual type of the arguments passed
// Tools like cppinsights.io can show template instantiations

template <typename T> T maximum(T a, T b); // T is placeholder



// TEMPLATE PARAMETERS BY REFERENCE

template <typename T> const T& maxByRef (const T& a, const T& b); // by reference -> and making sure no one changes them
// Name must be different otherwise compiler will be confused



// TEMPLATE SPECILISATION -> telling the function that if certain arguments are passed do this

template <>
const char* maximum <const char*> (const char* a, const char* b);



int main(int argc, const char * argv[]) {
    
    
    //
    // Lambda Functions - anaymous local functions
    //
    
    
    // DECLARATION -> capture list + parameters + return type (can be ignored) + {}


    // 1. calling it directly - but will call only once
    
    []() {
        cout << "ONLY ONCE" << endl;
    } ();
        
    
    // 2. storing it in variable
    auto result = [](double a, double b) -> double {
        return (a+b);
    } (12.1, 235.6);
    
    cout << result << endl;
    cout << endl;
    
    
    // CAPTURE LISTS -> giving you access to variables outside of scope. Without having to pass it
    
    double a{10};
    double b{20};
    
    auto lamFunc = [&a,&b](){
        return a+b;
    };
    
    // Capture by value -> copy of the variable
    // Capture by reference -> not copy
    
    cout << lamFunc() << endl;
    
    
    
    // CAPTURE ALL IN CONTEXT
    
    // = is capture all by value. & is capture all by reference.
    
    auto capAll = [=](){
        // I can access anything I want
        cout << lamFunc() << endl;
    };
    
    capAll();
    
    

    int a2 {23};
    int b2 {45};
    
    
    cout << endl;
    cout << maximum(a, b) << endl;
    cout << maximum(a2, b2) << endl;
    cout << maximum("JONA", "BRO") << endl;
    
    // Pointers - looking at which address is further out
    
    int* pA2 {&a2};
    int* pB2 {&b2};
    
    cout << maximum(pA2, pB2) << endl;
    
    cout << endl;

    
    // TEMPLATE TYPE DEDUCTION
    // Compiler looking at the arguments passed and substituting types for the placeholder
    

    double c{3534.2};
    double d{5.44};
    
    maximum(c, d);
    
    // EXPLICIT ARGUMENTS
    
    cout << maximum<double>(c, d) << endl; // Can now support parameters of different types
    cout << maximum<double>(a, d) << endl;


    
    const char* e{"CONST CHAR IS DUMB"};
    const char* f{"FORGOT CONST CHAR IS STRING"};
    
    cout << maximum(e, f) << endl;
    
    
    
    return 0;
}



template <typename T> T maximum(T a, T b){
    return (a > b)? a : b;
}


template <>
const char* maximum <const char*> (const char* a, const char* b) {
    return (strcmp(a, b) > 0) ? a : b;
}




