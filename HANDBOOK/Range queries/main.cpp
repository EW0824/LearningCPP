//
//  main.cpp
//  Range queries
//
//  Created by OAA on 22/09/2022.
//

#include <iostream>
#include <vector>

using namespace std;

int n;


//
// BINARY INDEX TREE
//

/* Compared to prefix sum array which calculates sum in O(n) time (looping through each element), binary index trees are more efficient O(logn) and also allows updating.
 
 Prefix sum array would need to reconstruct entire array, where binary index trees only need O(logn) time to update a select number of values.

Basically, it breaks down each sum from 1 to k, as the largest power of 2 < k (we call is P(k)), and then the largest power of 2 between P(k) and k, so on and so forth. For example to calculate sum of (1, 8) we can do it straight away. Sum of (1, 7) is the sum of (1, 4), (5, 6), (7, 7).
 
 In case of sum from a>1 to k, we just do what normal prefix sum array do, which is -> sum(a, b) = sum(1, b) - sum(1, a-1)
*/

vector<int> tree = {1, 2, 3, 4, 5, 6, 7, 8};

int sum(int k) {
    int s = 0;
    while (k >= 1){
        s += tree[k];
//        cout << "S added: " << tree[k] << endl;
        // p(k) = k&-k!
        k -= k&-k;
    }
    
    return s;
}

// increasing array value at position k by x
void add(int k, int x, int n){
    while (k <= n){
        tree[k] += x;
        k += k&-k;
    }
}






//
// SEGMENT TREE
//

/*
 
 - It is more general than the binary indexed tree, which only supports sum queries (need 2+ binary indexed trees for minimum queries, etc).
 - Segment tree supports all queries (as long as it can be divided in two parts, in O(logn). However it requires a lot of memory and is difficult to implement.
 
 - It is in fact a lot more straightforward.
 - Just like a standard tree, where bottom row are elements, 2 of them add up to the sum 1 step above, and two sums at level 2 add up to sum at level 3, etc.
 
 
 
 implementation:
 - stored from top to bottom.
 - Tree[1] is the top node (sum of all), while tree[2], tree[3] are children, etc.
 - As a result, parent of tree[k] is tree [⌊k/2⌋] (floor of k/2), and children of tree[k] are tree[2k], tree[2k+1]
 
 
 */


int sum(int a, int b){
    
    a+=n;
    b+=n; // indices [0, n-1] are the parent nodes
    int s = 0;
    while (a<=b){
        if (a%2 == 1) s+= tree[a++]; // if left (odd) child, add not to the right
        if (b%2 == 0) s+= tree[b--]; // if right (even) child, add node to the left
        a /= 2; b/=2;
    }
    
    return s;
}


// Add x to position k
void (add(int k, int x)) {
    k+= n;
    tree[k] += x;
    for (k/=2; k>=1; k/=2){
        tree[k] = tree[2*k] + tree[2*k+1];
    }
}





//
// RANGE UPDATES
//

/*
 
 What if we want to update a range of values?
 
 This is so cool. Can build a DIFFERENCE ARRAY. The element at position k is just to add all elements until k.
 
 We can increase every element in range (A, B) by 5, just by increasing A by 5, and then decrease B+1 by 5. We only need to update one value.
 */




int main(int argc, const char * argv[]) {

    // Dont know whats going on
    cout << sum(5) << endl;
     
     
     
     
    return 0;
}
