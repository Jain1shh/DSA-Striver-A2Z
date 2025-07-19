#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    q.back()+=10;

    cout << q.front() << endl; // Outputs the front element of the queue (10)
    cout << q.back() << endl;  // Outputs the back element of the queue (50)
    cout << q.size() << endl;  // Outputs the size of the queue (4)

    q.pop(); // Removes the front element (10)
    cout << q.front() << endl; // Outputs the new front element (20)
    cout << q.empty() << endl; // Outputs 0 (false) since the queue is not empty
    queue<int> q1;
    q1.swap(q); // Swaps the contents of q1 and q

    
    return 0;
}