#include<iostream>
using namespace std;

void print(int n){
    int space = 2*(n-1);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }

        for(int j = 1; j <= space; j++){
            cout << " ";
        }

        for(int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
        space -= 2;
        
    }
}

int main(){
    int n;
    cout << "Input rows: "; cin >> n;
    cout << endl;
    print(n);
    return 0;
}