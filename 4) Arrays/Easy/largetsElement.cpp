#include<bits/stdc++.h>
using namespace std;

// Simple method
// sort array in increasing order and return the last element - that is the largest element [O(n log n)]

// Better method - O(n)
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int largest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    cout << "Largest element: " << largest << endl;
    
    return 0;
}