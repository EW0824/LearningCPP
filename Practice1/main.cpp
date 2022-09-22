
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <math.h>

using namespace std;

 

vector<int> icecreamParlor(int m, vector<int> arr) {
    
    sort(arr.begin(), arr.end());
    vector<int> indices;
    
    // 1,2,3,5,6
    // 8
    
    for (size_t i = 0; i < arr.size(); i++) {
        for (size_t j = i+1; (j < arr.size(), arr[i]+arr[j]<=m); j++) {
            if (arr[i]+arr[j]==m) {
                
                cout << i << j << endl;
                cout << arr[i] << arr[j] << endl;
                
                indices.push_back((int)i+1);
                indices.push_back((int)j+1);
                return indices;
            }
        }
        
        
    }
    
    return indices;
}



int main() {
    
    
    vector<int> v {1,4,3,5,2};
    
//    v = {-20, -3916237, -357920, -3620601, 7374819, -7330761, 30, 6246457, -6461594, 266854 };
    
    vector<int> v2 = icecreamParlor(4, v);
    
    for (auto i:v2) {
        cout << i << endl;
    }
    
    return 0;
    
    
}
