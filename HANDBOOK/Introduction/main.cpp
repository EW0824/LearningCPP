//
//  main.cpp
//  Introduction
//
//  Created by OAA on 17/08/2022.
//

//#include <bits/stdc++.h>  -> use this in actual competition

#include <iostream>

using namespace std;

int main() {

    
    
    // Doubles
    // When comparing doubles with int, dont do == due to precision, but: abs(a-b) < 1e-9
    
    if (abs(1-0.999999999999999999) < 1e-9) {
        cout << "Are equal" << endl;
        
    } else {
        cout << "not equal" << endl;
    }
    
    
    
    // SHORTENDING CODE
    
    // Typedef
    
    typedef long long ll;
    
    ll a = 12345629385;
    cout << a << endl;
    
    // Macros
    // #define PB push_back
    
    
    return 0;
}
