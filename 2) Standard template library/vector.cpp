#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, string>> vp;
    vp.push_back({1, "one"});
    vp.emplace_back(2, "Two");

    // defines v = {100, 100, 100, 100, 100}
    // This is a vector of size 5, with each element initialized to 100.
    vector<int> v1(5,100);

    vector<int> v2(v1); // Copy constructor -> copies content of v1 into v2

    vector<int> v3(5); // Creates a vector of size 5, with default values (0 for int)

    for(auto it : v){
        cout << it << " ";
    }

    cout << endl;

    for(auto it : v1){
        cout << it << " ";
    }

    cout << endl;

    for(auto it : v2){
        cout << it << " ";
    }

    cout << endl;

    for(auto it : v3){
        cout << it << " ";
    }

    cout << endl;

    for(auto it : vp){
        cout << it.first << " " << it.second << endl;
    }

    // v.size() returns the number of elements in the vector
    // v.pop_back() removes the last element from the vector
    // v.swap(v2) swaps the contents of v and v2
    // v.clear() removes all elements from the vector
    // v.empty() checks if the vector is empty

    // v.insert(v.begin(), 10); // Inserts 10 at the beginning of the vector
    // v.insert(v.end(), 20); // Inserts 20 at the end of the vector
    // v.insert(v.begin() + 1, 15); // Inserts 15 at the second position in the vector
    // v.erase(v.begin()); // Removes the first element from the vector
    // v.erase(v.begin() + 1); // Removes the second element from the vector
    // v.erase(v.begin() + 1, v.end()); // Removes all elements from the second to the last
    

    return 0;
}