#include<iostream>
using namespace std;

void print(int n){
    int number = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << number;
            number++;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Input rows: "; cin >> n;
    cout << endl;
    print(n);
    return 0;
}