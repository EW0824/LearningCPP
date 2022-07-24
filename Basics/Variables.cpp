//
//  Variables.cpp
//  LearningC++
//
//  Created by OAA on 21/07/2022.
//

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    // Data Types
    char grade = 'E';
    string school = "Ed School";
    int stuff = 84;
    // Float is less common
    float alevel = 2.2;
    // Double stores more digits
    double gpa = 4.5;
    
    bool isMale = false;
    
    // Variables
    string characterName = "Edmond";
    int characterAge;
    characterAge = 888;
    
    cout << characterName << " is " << characterAge << " years old" << endl;
    
    
    // String
    
    string phrase = "bro";
    
    phrase[2] = 'u';
    phrase[3] = 'v';
    
    cout << phrase << endl;
    cout << phrase[3] << endl;
    // cout << phrase.find("v", 0) << endl;
    
    
    
    // Numbers
    
    int wnum = 5;
    int dnum = 5.5;
    
    // two integers always return integer
    
    wnum++;
    
    cout << fmax(5, 10) << endl;
    
    
    
    // User Input
    
//    int age;
//    cout << "Enter age: ";
//    cin >> age;
//    cout << "You are " << age << " years old" << endl;
//
//    string name;
//    cout << "Enter name: ";
//    cin.ignore();
//    getline(cin, name);
//    cout << "Ur name is: " << name << endl;
    
    
    // Arrays
    
    // Declare size at definition
    int luckyNums[20] = {8, 24, 28, 48, 88};
    cout << luckyNums[0];
    
    return 0;
}
