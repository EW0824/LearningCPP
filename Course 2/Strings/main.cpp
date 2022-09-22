//
//  main.cpp
//  Strings
//
//  Created by OAA on 26/07/2022.
//

#include <stdio.h>
#include <iostream>

#include <cctype> // for strings

using namespace std;

// Generally, strings are not safe or convenient to work with.
int main() {
    
    
    // CHARACTER MANIPULATION
    
    cout << isalnum(46.0) << isalnum('R') << endl;
    
    // ToUpper

    char message[7] {"hello"};
    char uppMessage[]{};
    
    for (size_t i{}; i<size(message); i++){
        uppMessage[i] = toupper(message[i]);
    }
    
    cout << uppMessage << endl;
    cout << endl;
    
    
    
    // C-STRING MANIPULATION
    
    
    // Strlen
    const char strlenTest[] {"Good morning Vietnam"}; // will also work with pointer
    
    cout << "length of string: " << strlen(strlenTest) << endl;
    cout << "length from size: " << size(strlenTest) << endl; // also counts the \0 at the end
    
    
    // Strchr
    cout << endl;
    
    const char* str {"Good morning Vietnam"};
    char lookingFor = 'V';
    
    const char* current = str; // Pointer to array just points to the first letter
    size_t count{};
    
    // !Not really a loop. Basically sets current to first location of 'o'. Then print the location, while current adds one so strchr looks for 'o' in the remaining characters of str. Hence only two counts as it's not a properly loop going through every character.
    // Will not work if we loop with str. Think hard about logic.
    // strchr returns pointer to first location of the char looking for
    while ((current = strchr(current, lookingFor)) != nullptr) {
        cout << "Found " << lookingFor << " at index " << current << endl;
        
        current++;
        count++;
    }
    
    cout << "Total number: " << count << endl;
    
    
    // Strrchr
    cout << endl;
    
    char strrchrTest[] = "/home/user/hello.cpp";
    char* location= strrchr(strrchrTest, '/');
    
    if (location){
        cout << location+1 << endl;
    }
    

    // CONCATENATION AND  COPY
    
    
    // STR::STRING
    
    cout << endl;
    
    // This wraps on top of arrays, and don't need to worry about bounds and stuff.
    
    string planet {"Earth. Where the sky is blue"};
    
    string weirdMessage(4, 'e'); // eeee
    string earth {planet, 0, 5};
    
    cout << earth << endl;
    
    // Can also append characters!!
    
    planet = "Earth. Where the sky is blue and ocean has fish.";
    cout << planet << endl;
    
    
    
    
    
    
    return 0;
    
}
