#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int counter = 0;

    while(n>0){
        counter++;
        n = n/10;
    }
    return counter;
}

int main(){
    int number = 882006;
    cout << "Total digits present in "<<number << " is "<< count(number);
    return 0;
}