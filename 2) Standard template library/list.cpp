#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int> l;
    l.push_back(1);
    l.emplace_back(2);
    l.push_front(0);
    l.emplace_front(-1);
    l.push_back(3);
    l.emplace_back(4);
    l.push_front(-2);
    l.emplace_front(-3);
    l.push_back(5);

    for(auto it : l){
        cout << it << endl;
    }

    // Other functions are same as vector
    // l.size() returns the number of elements in the list
    // l.pop_back() removes the last element from the list
    // l.pop_front() removes the first element from the list
    // l.swap(l2) swaps the contents of l and l2
    // l.clear() removes all elements from the list
    // l.empty() checks if the list is empty
    

    return 0;
}