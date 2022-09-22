//
//  main.cpp
//  Time Complexity
//
//  Created by OAA on 17/08/2022.
//

#include <iostream>


using namespace std;


int myApproach(int arr[], int size) {
    int max = 0;
    
    for (int i{0}; i < (size); i++) {
                      
        // number of items in the array
        for (int j {0}; j < (size - i); j++) {
            
            int current = 0;
                        
            for (int k{0}; k <= j; k++) {
                current += arr[i+k];
            }
            
            if (current > max) { max = current; }
        }
    }

    return max;
}


int bookApproach1(int array[], int n) {
    
    int best = 0;
    for (int a = 0; a<n; a++) {
        for (int b=a; b<n; b++) {
            int sum = 0;
            for (int k = a; k<=b; k++) {
                sum += array[k];
            }
            best = max(best, sum);
        }
    }
    
    return best;
}



int bookApproach2(int array[], int n) {
    
    int best = 0;
    for (int a = 0; a < n; a++) {
        int sum = 0;
        for (int b = a; b < n; b++) {
            sum += array[b];
            best = max(best, sum);
        }
    }
    
    return best;
}



int bookApproach3(int array[], int n) {
    
    int best = 0, sum = 0;
    
    for (int k = 0; k < n; k++) {
        /* k = 0. sum = -1, best = -1
        k = 1. sum = max(2, or -1+2) = 2. best = 2
        k = 2. sum = max(4, 6) = 6
         
         
         */
        sum = max(array[k], sum + array[k]);
        best = max(sum, best);
        
    }
    
    return best;
}




int main() {
    

    int arr[] ={-1, 2, 4, -3, 5, 2, -5, 2};

    cout << myApproach(arr, 8) << endl;
    cout << bookApproach1(arr, 8) << endl;
    
    cout << bookApproach3(arr, 8) << endl;
    
    
    return 0;
}
