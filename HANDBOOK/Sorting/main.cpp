//
//  main.cpp
//  Sorting
//
//  Created by OAA on 18/08/2022.
//

#include <iostream>
#include <vector>


using namespace std;

// sorting primarily by x coordinate and secondarily by y coordinate
struct P {
    int x, y;
    
    // operator< is the comparison
    bool operator<(const P &p) {
        if (x != p.x){
            return x < p.x;
        } else {
            return y < p.y;
        }
    }
};




// sorting primarily by length and secondarily by alphabetical order
bool comp(string a, string b){
    if (a.size() != b.size()) return a.size()>b.size();
    return a<b;
}





int main(int argc, const char * argv[]) {

    
    
    // SORTING VECTORS
    vector<int> v = {4,2,5,3,5,8,5};
    
    sort(v.begin(), v.end());
    
    // reverse
    sort(v.rbegin(), v.rend());
    
    
    // SORTING ARRAY
    int n = 7;
    int a[] = {4,2,5,3,5,8,3};
    
    sort(a, a+n);
    
    
    // PAIRS
    
    vector<pair<int, int>> vPair;
    vPair.push_back({1, 5});
    vPair.push_back({1,3});
    
    
    // TUPLES
    
    vector<tuple<int, int, int>> vTup; // same stuff
    
    
    
    // COMPARISON FUNCTION
//    sort(v.begin(), v.end(), comp);
    
    
    
    return 0;
}
