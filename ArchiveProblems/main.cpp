

// Question: finding the largest palindrome number from a string
// i.e. 00009 is 9. 444947137 is 7449447


// Stopped as first, have to climb mountain with dad's company, also code is too messy and definitely not healthy, also have not considered boundary cases at all.


#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <map>

using namespace std;


int main() {
    
    
    string num = "00001105", half, final;
    int halfLen;
    
    vector<char> v, repeating(num.begin(), num.end()), nonRepeating;
    set<char> s, s2;
    
    // Getting repeating/nonrepeating!
    
    // repeating: 4,4,4,7. Set: 1,3,4,7,9. Non-repeating: 1,3,9
        
    for (auto i:num) {
        s.insert(i);
    }
        
    
    for (auto i:s) {
        auto itr = find(repeating.begin(), repeating.end(), i);
        repeating.erase(itr);
    }
    
    for (auto i:repeating) s2.insert(i);
    
    for (auto i:s2) {
        repeating.push_back(i);
    }
    
    for (auto i:repeating) { cout << i << endl;}
    

    for (auto i:s) {
        bool present = binary_search(repeating.begin(), repeating.end(), i);
        if (!present){
            nonRepeating.push_back(i);
        }
    }

    
    

    // Finding length of palindrome
    
    cout << "Find palindrome length" << endl;

    int maxLen = num.size() - nonRepeating.size() + 1;
//    cout << maxLen << endl;

    if (maxLen %2 == 0) halfLen = maxLen / 2;
    else halfLen = (maxLen - 1) / 2;
    
    cout << "Maximum length is: " << maxLen << endl;
    cout << "Half length is: " << halfLen << endl;
    
    // Creating palindrome

    cout << "Creating palindrome" << endl;
    
    
    // first half
    for (int i{0}; i<halfLen; i++) {
                
        auto it = max_element(repeating.begin(), repeating.end());
        
        if (i == 0 && *it == '0') {
            goto jump;
        }
 
        half += *it;
        repeating.erase(it);
        it = max_element(repeating.begin(), repeating.end());
        repeating.erase(it);
        
//        max += max(repeating);
//        auto itr = find(repeating.begin(), repeating.end())
    }
    
    
jump:
        
    string reverseHalf = half;
    reverse(reverseHalf.begin(), reverseHalf.end());

    auto it2 = max_element(nonRepeating.begin(), nonRepeating.end());
    
    final = half + *it2 + reverseHalf;
    
//    cout << final << endl;
    
//    final.erase(remove(final.begin(), final.end(), '0'), final.end());
    
    cout << final << endl;

    
    return 0;
}



