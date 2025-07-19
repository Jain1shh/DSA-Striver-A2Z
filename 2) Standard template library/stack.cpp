#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    s.push(1); // Adds 1 to the top of the stack
    s.emplace(2); // Adds 2 to the top of the stack
    s.push(3); // Adds 3 to the top of the stack
    s.emplace(4); // Adds 4 to the top of the stack
    s.push(5); // Adds 5 to the top of the stack

    cout << s.top() << endl; // Outputs the top element of the stack (5)
    s.pop(); // Removes the top element (5)
    cout << s.size() << endl; // Outputs the size of the stack (4)
    cout << s.empty() << endl; // Outputs 0 (false) since the stack is not empty

    stack<int> s1;
    s1.swap(s); // Swaps the contents of s1 and s



    return 0;
}