#include<bit>/stdc++.h>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);
    d.emplace_back(2);
    d.push_front(0);
    d.emplace_front(-1);
    d.push_back(3);
    d.emplace_back(4);
    d.push_front(-2);
    d.emplace_front(-3);

    // rest of the functions are same as vector
    return 0;
}