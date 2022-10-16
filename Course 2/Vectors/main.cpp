//
//  main.cpp
//  Vectors
//
//  Created by OAA on 30/07/2022.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {

    
    /*
     It's an array which can dynamically change its size
     */
    
    vector<int> v1 = {1, 2, 3, 4};
    cout << v1[1] << endl;
    cout << "Current capacity: " << v1.capacity() << endl; // how much potential -> capacity also doesn't decrease when you remove elements
    
    v1.push_back(9);
    cout << "New capacity: " << v1.capacity() << endl; // doubles each time
    
    
    
    // Inserting
    
    v1.insert(v1.begin(), 5);
    cout << v1[0] << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
    
    
    
}
