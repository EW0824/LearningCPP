//
//  main.cpp
//  Pointers
//
//  Created by OAA on 26/07/2022.
//

#include <iostream>
#include <stdio.h>

using namespace std;

// Always initialise pointers, even before you use them!

int main() {
    
    
    // DECLARATION
    
    /*
    int num = 48;
    // BAD int* pNum; // ALWAYS INITIALISE POINTER
    
    int* pNum = &num;
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
    
    
    // PROGRAM MEMORY MAP
    /*
     The PC can never have enough real memory (RAM) for all of the apps simutaneously. Hence, it creates virtual memory in which all apps think they are the only app running, so have access to all of the memory. The difference between 32 and 64 bit systems is on the virtual memory being 2^n - 1, with n being 32 or 64.
     
     MMU (memory management unit) transforms the representation of program in memory map to the real memory layout in real memory. The program is never loaded in real memory by CPU. Only parts about to be executed are there. Things unlikely to be used will be stored on hard drive, to conserve space.
     
     Each app, thinking they have access to all the space, uses them and are passed to the MMU who then allocates to the real memory. Memory map is standard for OS - all apps must conform to it.

     Memory map is divided into system, stack, heap, data, text, etc (few different version)
     
     Stack will store local variables. Heap is additional memory if stack runs out - making program better. Text will load the binary of program. Stack and Heap are the most important to us.
     */
    
    
    
    // DYNAMIC MEMORY ALLOCATION
    /*
     Why we use pointers.
     
     IMPORTANT - always initialise pointers. If its uninitialised it will have random location and when we access/modify it we are potentially messing with the memory address of some other programs. This may corrupt data and stuff.
     
     So far we have only used stack. For stack, the developer can't fully control memory lifetime (when the variable gets deleted), which is controlled by the scope mechanism. For heap howwever, the developer is in full control of the lifetime through new and delete operators.
     */
    
    
    // Using the heap
    
    int* pHeap = new int; //Only works with dynamic memory allocation. That memory is exclusive to this program
    
    // * of pointer means value
    *pHeap = 77;
    cout << "Dynamically allocating memory: " << *pHeap << " at address: " << pHeap << endl;
    
    delete pHeap; // returning memory
    pHeap = nullptr; // for good practice, meaning there is nothing in that pointer - if need it again do 'new int'.
    
    // BAD -> do not delete pointer twice - anything can happen!
    
    
    
    // DANGLING POINTERS
    /* Pointers that do not point to valid memory addresses. 3 types: uninitialised, deleted, or multiple pointers to same location
    
        Solutions:
     - Always initialise
     - Reset pointers to nullptr after delete
     - Make sure there is owner pointer if multiple pointers
     
    */
    int* pUninitialized; // bad
    int* pInitialised{}; // good
    
    if (pInitialised!= nullptr){
        cout << "This is initialised at: " << pInitialised << endl;
    }
    
    // Master pointer
    int* pMaster = new int (382);
    int* pSlave = pMaster;
    
    if (pMaster != nullptr) {
        cout << "Master pointer is not empty so can use this: " << pSlave << endl;
    }
    
    
    // NULL POINTER SAFETY
    // Instead of saying "If (pNumber != nullptr)", we can just say "If (pNumber)". Good practice to always check if pointer is null before doing anything to it.
    
    
    // MEMORY LEAKS
    // When we lose the pointer (memory location). So it has been leaked. If leaks keep on happening and an application (like a server one which runs for 3 months) continues running it will crash.
    
    
    // DYNAMIC ARRAYS
    // Arrays on the heap! So far they have been on the stack
    // These ones do not work with std::size, also don't support range based for loops. Array has decayed into a pointer.
    
    /*
    size_t size = 10;
    
    double* pSalaries = new double[size]; // uninitialized so junk values
    
    int* pStudents = new(nothrow) int[size]{}; // nothrow to not raise exceptions
    double* pScores = new(nothrow) double[size]{1,2,3,4,5};
     
    if (pScores) {
        for(size_t i=0; i<size; i++) {
            cout << pScores[i] << endl;
        }
    }
    
    delete[] pScores;
    pScores = nullptr;
    delete[] pStudents;
    pStudents = nullptr;
    delete[] pScores;
    pScores = nullptr;
     
     */
    
    
    
    //
    // References
    //
    
    cout << endl;
    
    
    // DECLARATION
    
    int num = 12;
    int& rNum = num;
    cout << "Number value: " << num << " is the same as reference: " << rNum << endl;
    
    rNum = 101; // changing reference or original variable both work
    cout << "New value: " << num << " is still same as reference: " << rNum << endl;
    
    /* Properties:
     - References access directly, pointers need to dereference, i.e. * at the start
     - Need to be initialized at declaration, pointers don't need.
     - References cannot be changed, pointers can. They are like const pointers.
     */
    
    
    
    // CONST
    
    cout << endl;
    
    int constNum {0};
    
    const int& rConstNum = constNum;
//    const int* const constNum = &constNum; // Can also use pointer, but reference is just const pointer so don't need two const
    
    
    
    return 0;
}

