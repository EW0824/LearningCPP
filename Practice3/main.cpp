
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <math.h>

using namespace std;

 
 bool customSort(string a, string b){
    
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }
    
    for (int i{0}; i < a.size(); i++) {
        
        if (a[i] < b[i]) return true;
        else if (a[i] > b[i]) return false;
    }
    
    return false;
}

vector<string> bigSorting(vector<string> unsorted) {

//    vector<string> sorted;
//
//    vector<long long> nums;
//    vector<string> tooLong;
//
//    for (auto i:unsorted) {
//
//        if (i.size() > 16) tooLong.push_back(i);
//        else nums.push_back(stoll(i));
//
//    }
//
//    sort(nums.begin(), nums.end());
//    sort(tooLong.begin(), tooLong.end(), customSort);
//
//    for (auto i:nums) {
//        sorted.push_back(to_string(i));
//    }
//
//    sorted.insert(sorted.end(), tooLong.begin(), tooLong.end());
//    return sorted;
    
    sort(unsorted.begin(), unsorted.end(), customSort);
    return unsorted;

}


int main() {
    




    vector<string> v = {"1", "2", "100", "200", "111", "3084193741082937", "3084193741082938", "12303479849857341718340192371"};

    vector<string> sorted = bigSorting(v);

    for (auto i:sorted) {
        cout << i << endl;
    }
    
    
    return 0;
    
    
}
