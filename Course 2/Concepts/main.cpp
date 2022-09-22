//
//  main.cpp
//  Concepts
//
//  Created by OAA on 27/07/2022.
//


/*
 Definition - a mechanism which places constraint on template type parameters. Only in C++ 20.
 
 There are built-in and custom concepts.
*/


#include <iostream>
#include <concepts>

using namespace std;


// USING CONCEPTS
// 4 different syntaxes achieving the same thing!!

template <typename T>
requires integral <T> // 1 extra line
T add(T a, T b) {
    return a+b;
}

template <typename T>
T add2(T a, T b) requires integral <T> {
    return a+b;
}


template <integral T>
T add3(T a, T b) {
    return a+b;
}
 
auto add4 (integral auto a, integral auto b) {
    return a+b;
}

// add1, add2, add3 and add4 are all the same



// CUSTOM CONCEPTS


template <typename T>
concept MyIntegral = is_integral_v<T>; // is_integral_v is in std library

template <typename T>
concept Addable = requires(T a, T b) {
    a+b;
};


template <typename T>
concept Multipliable = requires(T a, T b) {
    a * b;
};

template <typename T>
concept TinyType = requires (T a) {
    sizeof(T) <= 4;
};
// Simple Requirements - only looks at character type (only enforces syntax) !! Anything smaller than int does not work.




// REQUIRES CLAUSE


/* What we can do:
 simple requirements, nested requirements, compound requirements, etc
*/


// Nested Requirement:

template <typename T>
concept TinyTypeNested = requires (T a) {
    sizeof(T) <= 4;
    requires sizeof(T) <= 4;
};


// Compound Requirements:

template <typename T>
concept AddableCompound = requires (T a, T b) {
    {a + b} noexcept -> convertible_to<int>;
    // Checks if a+b is valid, doesn't throw exception (optional), and result convertable to int (optional)
};




// Combining Requirements:

template <typename T>
requires AddableCompound<T> && Multipliable<T>
T AddMultiply(T a, T b) {
    return (a++) * (b++);
}





// Using it

template <typename T>
T add5 (T a, T b) requires MyIntegral<T> {
    return a + b;
}

template <Addable T>
T add6 (T a, T b) {
    return a+b;
}

// We are putting constraints on the auto keyword
TinyType auto add7 (TinyType auto a, TinyType auto b) {
    return a + b;
}

TinyTypeNested auto add8 (TinyTypeNested auto a, TinyTypeNested auto b) {
    return a + b;
}

AddableCompound auto add9 ( AddableCompound auto a, AddableCompound auto b) {
    return a + b;
}




int main(int argc, const char * argv[]) {
    // insert code here...
    
    int int1{20};
    int int2{48};
    
    
    
    char char1{10};
    char char2{20};
    
    cout << "Adding characters with add1: " << static_cast<int>(add(char1, char2)) << endl;
    
    double doub1{123.2};
    double doub2{134.555};
    
    // Doesn't work for doubles
    cout << "Adding doubles: " << add6(doub1, doub2) << endl;
    
    string str1{"EDMOND"};
    string str2{"IS THE BEST"};
    
    
    cout << "Adding strings: " << add6(str1, str2) << endl;
    
    cout << endl;
    cout << "Add7: " << add7(doub1, doub2) << endl;
    cout << "Add8: " << add8(int1, int2) << endl;
    
    cout << "Addable?: " << add9(doub1, doub2) << endl;
    
    cout << endl;
    cout << AddMultiply(doub1, doub2) << endl;
    
    return 0;
}
