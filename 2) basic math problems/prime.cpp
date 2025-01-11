#include<iostream>
#include<cmath>
using namespace std;

void checkPrime(int n){
    int count = 0;
    for(int i = 1; i<=sqrt(n); i++){
        if(n%i == 0){
            count++;

            if(n%i != i){
                count++;
            }
        }
    }
    if(count != 2){
        cout << "Number ain't prime";
    }else{
        cout << "Number is prime";
    }
}

int main(){
    int n;
    cin >> n;
    checkPrime(n);
}