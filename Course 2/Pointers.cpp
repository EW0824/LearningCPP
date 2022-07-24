//
//  Pointers.cpp
//  LearningC++
//
//  Created by OAA on 24/07/2022.
//
#include <iostream>
#include <stdio.h>

using namespace std;

// Good to always initialise things

int main() {
    
    
    // DECLARATION
    
    /*
    int num = 48;
    int* pNum{};
    
    pNum = &num;
    // Dereferencing = reading location of pointer
    cout << "Value of num: " << *pNum << " and address of num: " << pNum << endl;
    cout << "Value of num: " << num << " and address of num: " << &num << endl;
    // two are equivalent
     */
    
    
    // CHAR POINTER
    
    // It's not char, its const char -> cannot change
    const char* pMessage = "Hello World!";
    cout << "Message is: " << pMessage << " with location: " << *pMessage << endl; // pointer to string points to the

    // If want to modify string -> use arrays properly!
    char message1[] = "Hello World!";
    message1[0] = 'b';
    
    
    return 0;
}

 
