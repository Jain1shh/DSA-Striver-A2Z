#include<iostream>
#include<cmath>
using namespace std;

void isGCD(int n1, int n2){
    for(int i = min(n1,n2); i > 0; i--){
        if(n1 % i == 0 && n2 % i == 0){
            cout <<"GCD: "<< i;
            break;
        }
    }
}

int main(){
    int n1,n2;
    cin >> n1;
    cin >> n2;

    isGCD(n1,n2);
}