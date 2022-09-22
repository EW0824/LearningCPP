//
//  main.cpp
//  Functions
//
//  Created by OAA on 26/07/2022.
//

#include <stdio.h>
#include <iostream>


using namespace std;

void sayHi(string name){
    cout << "Hello " << name << endl;
}

void evalPerson(){
    bool isMale = true;
    bool isTall = true;
    
    cout << "Are you male: ";
    cin >> isMale;
    
    cout << "Are you tall: ";
    cin >> isTall;
    
    if(isMale && isTall){
        cout << "Hello tall boy" << endl;
    } else if (!isMale && !isTall) {
        cout << "Hiiiiii girl" << endl;
    } else {
        cout << "BRUH" << endl;
    }
}

double cube(double num){
    return num * num * num;
}


int getMax(int num1, int num2) {
    
    if (num1 > num2){
        return num1;
    } else {
        return num2;
    }
}

int calc(){
    int num1, num2;
    char op;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    
    if(op == '+'){
        return num1 + num2;
    } else if (op == '-'){
        return num1 - num2;
    } else if (op == '*'){
        return num1 * num2;
    } else if (op == '/'){
        return num1 / num2;
    } else if (op == '^'){
        return num1 ^ num2;
    } else{
        cout << "INVALID" << endl;
        return 1;
    }
}


string getDayOfWeek(int dayNum){
    string dayName;
    
    switch(dayNum){
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default:
            dayName = "Invalid";
            break;

    }
    
    return dayName;
    
}


void whileLoop(){
    
    int index = 1;
    while (index <= 5){
        cout << index << endl;
        index++;
    }
    
    // do while loop - executing code before checking the condition
    
    index = 1;
    
    do {
        cout << index << endl;
        index++;
    } while (index <= 5);
    
}


int power(int baseNum, int powNum){
    int result = 1;
    
    for(int i = 0; i < powNum; i++){
        result *= baseNum;
    }
    
    return result;
}





int main(){
    sayHi("Mike");
    cout << cube(5.0) <<endl;
 
//    evalPerson();
//    cout << calc() << endl;
    
    cout << getDayOfWeek(5) <<endl;
    
    
//    // While Loop
//    int index = 1;
//    while(index <= 5){
//        cout << index << endl;
//        index++;
//    }
//
//    // For Loop
//
//    int nums[] = {1, 3, 5, 7, 9};
//
//    for(int i = 0; i < 5; i++){
//        cout << nums[i] << endl;
//    }
    
    
    cout << power(5, 2) << endl;
    
    // 2D Array
    int numberGrid[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << numberGrid[i][j];
        }
        cout << endl;
    }
    
    
    /*
     Comments -> hehehe
     */
    
    
    
    
    
    return 0;
}



