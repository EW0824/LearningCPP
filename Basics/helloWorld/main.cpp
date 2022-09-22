//
//  main.cpp
//  helloWorld
//
//  Created by OAA on 26/07/2022.
//

// built in library for std, cout

#include <iostream>
#include <string>


// inside bracket is not necessary
//

int main(int argc, const char * argv[]) {
    // insert code here...
//    char str_name[100];
//    printf("Enter Your Name, lil B: ");
//    scanf("%s", str_name);
    
    std::cout << "What is your name?: ";
    std::string userInput;
    std::cin >> userInput;
    
    std::cout << "Hello, lil bitc " << userInput << std::endl;
    return 0;
}










