#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "Hello, STL!" << endl;
    pair<int, string> p = {1, "STL"};
    cout << "Pair: " << p.first << ", " << p.second << endl;

    pair<int, pair<int, string>> nestedPair = {2, {3, "Nested STL"}};
    cout << "Nested Pair: " << nestedPair.first << ", " 
         << nestedPair.second.first << ", " 
         << nestedPair.second.second << endl;

    pair<int, int> arr[3] = {{1, 2}, {3, 4}, {5, 6}};
    
    cout << "Array of Pairs:" << endl;
    for(int i = 0; i < 3; i++) {
        cout << "Pair " << i + 1 << ": " << arr[i].first << ", " << arr[i].second << endl;
    }
    return 0;
}