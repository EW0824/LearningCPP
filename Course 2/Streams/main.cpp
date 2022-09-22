//
//  main.cpp
//  Streams
//
//  Created by OAA on 30/07/2022.
//


/*
 Think of streams like a buffer. Every time you type characters it will be stored in a stream and only passed to the running program after hitting 'enter'. Like the bucket of water in chidlren playgrounds which fall down and destroy the children.
 
 3 main stream classes - iostream, fstream, and sstream
 */

#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
//
//    // STRINGSTREAM
//    // Converting int to string -> have to pass through stringstream first
//    stringstream stream;
//    string str;
//
//    cout << "Enter an integer value: " << endl;
//    int input;
//    cin >> input;
//
//    stream << input;
//
//    stream >> str;
//
//    cout << "Here is the string: " << str << endl;
//    cout << endl;
    
    
    // ISTRINGSTREAM
    
    string personData{""}, fn{""}, occ{""};
    int age = 0;
    istringstream inputPerson;
    
    cout << "Enter person data as follows, \n" << "first_name age occupation: " << endl;
    getline(cin, personData);
    
    cout << "\nYou entered: " << personData << endl;
    
    inputPerson.str(personData); // copies the string person data into input person stream
    
    inputPerson >> fn >> age >> occ;
    
    cout << fn << " is a " << age << " year old " << occ << "." << endl;
    
    
    
    // IMPORTANT -> It's fine to use cin and getline separately. DO NOT USE THEM TOGETHER -> if you mix then it won't work.
    
    
    return 0;
}
