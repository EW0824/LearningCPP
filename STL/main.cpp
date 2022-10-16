//
//  main.cpp
//  STL
//
//  Created by OAA on 15/08/2022.
//


// ALternatively:
#include <bits/stdc++.h> // this includes all libraries!!

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;


bool f(int x, int y) {
    return x > y;
}



int main(int argc, const char * argv[]) {

    //
    // VECTORS
    //
    
    
    vector<int> A = {11, 2, 3, 14};
    cout << A[1] << endl;
    
    
    // DEFAULT VALUE: ojust 0. Hence to initiate a vector of size 10 filled with zeros:
    vector<int> defaultV (10);
    defaultV[5] = 4;
    
    
    //
    // 2D VECTORS
    //
    
    vector<vector<int>> twoD;
    
    for (int i{0}; i<5; ++i){
        twoD[i] = {0, 0};
    }
    
    // printing out everything:
    
    for (size_t i = 0; i<twoD.size(); ++i){
        for (size_t j = 0; j<twoD[i].size(); ++j){
            cout << v[i][j] << endl;
        }
    }
    
    // twoD.push_back({a, b});
    
    
    


    // SORT
    
    
    sort(A.begin(), A.end()); // O(NlogN)

    
    // BINARY SEARCH
    
    
    bool present = binary_search(A.begin(), A.end(), 3); //true
    present = binary_search(A.begin(), A.end(), 4); //false

    A.push_back(100);
    A.push_back(100);
    
    present = binary_search(A.begin(), A.end(), 100); // true
    
    
    A.push_back(123);
    
    
    // LOWER/UPPER BOUND, COUNT
    
    
    vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100); // first element >= 100
    vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100); // first element > 100
    

    cout << *it << " " << *it2 << endl;
    
    cout << it2 - it << endl; // count of 100 -> 2 because there is 2 100
    
    
    
    
    
    // REVERSE ORDER
    
    sort(A.begin(), A.end(), f);
    
    vector<int>::iterator it3;
    
    cout << "Descending order: " << endl;
    for (it3 = A.begin(); it3 != A.end(); it3++) {
        cout << *it3 << " ";
        
    }
    cout << endl;
    cout << endl;
    
    cout << "But C++ is making our life so much earlier: " << endl;
    
    for(int x: A) {
        cout << x << " ";
    }
    
    cout << endl;
    cout << endl;
    
    cout << "Incrementing: " << endl;
    
    // passing by reference so can edit directly
    for(int &x: A) {
        x++;
    }
    for(int x: A) {
        cout << x << " ";
    }
    
    cout << endl;
    cout << endl;
    
    
    
    // REMOVE
    
    // Getting rid of all occurrences of something:
    
    string my_str = "EDMOND";
    
    my_str.erase(remove(my_str.begin(), my_str.end(), 'D'), my_str.end());
    
    cout << my_str << endl;
    cout << endl;
    
    
    
    
    
    
    
    
    
    // SETS -> INSERTING IN RANDOM ORDER
    
    
    // Properties: UNIQUE, UNORDERED
    
    
    set<int> S;
    S.insert(1);
    S.insert(-1);
    
    
    auto itSet = S.find(-1);
    
    if (itSet == S.end()) {
        cout << "Not present" << endl;
    } else {
        cout << "Present: " << *it << endl;
    }
    
    auto itSet2 = S.lower_bound(0); // unlike vector, set is already sorted
    
    cout << *itSet2 << endl;
    
    // Any insertion is log(N), the set will always stay sorted, so finding biggest element is just logN as well.
    
    
    
    //
    // MAP
    //
    
    cout << endl;
    
    // mapping is log(N) time, retrieving is log(N)
    map<int, int> M;
    M[1] = 100;
    M[2] = -24;
    M[10086] = 888;
    
    map<char, int> cnt;
    string name = "edmond wang";
    
    for (char c: name) {
        cnt[c]++;
    }
    
    // Can just find the frequency of any letter in log(N)
    cout << cnt['d'] << " " << cnt['a'] << endl;
    
    
    // Print out everything
    /*
     for (auto pair:m) cout << pair.first << " : " << pair.second << "\n";
     */
    
    
    // The keys are sorted by default!!!
    
    
    
    
    
    //
    /*
     
     Solving a real problem: add interval [x, y], like [2, 3], [10, 20], [30, 400], [401, 450] etc -> no overlapping intervals
     Which interval contains 13?
     
     */
    
    set< pair<int, int> > SET;
    
    // comparison between pairs work like this: for {a, b}, {c, d}, if (a<c) && (a=c || b<d), then {a,b}<{c,d}
    
    
    SET.insert({2, 3});
    SET.insert({10, 20});
    SET.insert({401, 450});
    SET.insert({30, 400});

    
    int point = 999;
    auto itSET = SET.lower_bound({point, INT_MAX}); // This will automatically find a bigger interval than the pervious one, so need to subtract 1
    
    // If it's the first case we cannot subtract 1
    if(itSET == SET.begin()) {
        cout << "Point " << point << " is too small \n";
    } else {
        itSET--;
    }
    
    pair<int, int> current = *itSET;
    
    if (current.first <= point && point <= current.second) {
        cout << "Yes the point " << point << " is present between: " << current.first << " " << current.second << endl;
    } else {
        cout << "Point " << point << " is not lying in any interval... \n";
    }
    
    
    
    return 0;
}
