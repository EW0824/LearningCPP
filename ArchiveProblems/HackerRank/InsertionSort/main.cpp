//
//  main.cpp
//  InsertionSort
//
//  Created by OAA on 24/08/2022.
//

// Self-made! (with inspiration on the for loop condition from someone else)

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <math.h>

using namespace std;


void insertionSort2(int n, vector<int> arr) {
    
    for (int i{1}; i < n; i++) {
        
        int current = arr[i], j;
        
        for (j = i-1; (j >=0 && arr[j] > current); j--) {
            arr[j+1] = arr[j];
        }
        
        arr[j+1] = current;
        for (auto i:arr) cout << i << " ";
        cout << endl;
    }


}


int main() {
    
    
    int n = 6;
    vector<int> v = {1,4,3,5,6,2};
    
    insertionSort2(n, v);

    return 0;
    
    
}

