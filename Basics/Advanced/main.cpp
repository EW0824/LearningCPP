//
//  main.cpp
//  Advanced
//
//  Created by OAA on 26/07/2022.
//

#include <iostream>
#include <string>

using namespace std;


class Book {
    
// private: only code within the class can access these things
private:
    int pages;
    
    
// public: everyone can access
public:
    string title;
    string author;
    
    // Constructors:
    
    // Default
    Book(){
        title = "No Title";
        author = "No Author";
        pages = 0;
    }
    
    // For passing arguments
    Book(string aTitle, string aAuthor, int aPages){
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};



class Student {
    
private:
    double gpa;
    string pet;
    
public:
    string name;
    string major;
    
    Student(string aName, string aMajor, string aPet, double aGpa){
        name = aName;
        major = aMajor;
        setGpa(aGpa);
        setPet(aPet);
    }
    
    bool hasHonors(){
        if (gpa >= 3.5) {
            return true;
        }
        return false;
    }
    
    
    // Must go through this function to modify GPA
    void setGpa(double aGpa) {
        if (0.0 < aGpa < 4.0) {
            gpa = aGpa;
        }
    }
    
    void setPet(string aPet){
        if (aPet == "dog"){
            pet = aPet;
        } else {
            pet = "DOG";
        }
    }
    
    string getPet(){
        return pet;
    }
};



// Inheritance

class InternationalStudent : public Student {
public:
    void makeFood(){
        cout << "I can also make food" << endl;
    }
};



int main(int argc, const char * argv[]) {
    // insert code here...

    
    // POINTERS - just another form of data, like int, double, string
    int age = 19;
    int *pAge = &age; // &age = pointer of age. * = pointer variable
    double gpa = 9.9;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;
    
    cout << &age << endl;
    cout << *pAge << endl; // * = Dereferencing the pointer -> the variable it points towards
    // & and * just offset
    
    
    
    
    // Class & Objects
    
    Book book1("The Gay Science", "Friedrich Nietzsche", 888);
    
    Book book2;
    
    cout << book1.title << endl;
    cout << book2.title << endl;
    

    
    // Object Functions
    Student student1("Jim", "Business", "non-dog", 2.4);
    Student student2("Pam", "Art", "cat", 3.6);
    
    student2.setGpa(-1);
    
    cout << student2.hasHonors() << endl;
    cout << student2.getPet() << endl;
    
    
    
    InternationalStudent student3("Edmond", "CS", "dog", 2);
    cout << student3.major << endl;
    
    return 0;
}
