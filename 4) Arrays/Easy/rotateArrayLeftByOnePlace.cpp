#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr= {1,2,3,4,5};

    int temp = arr[0];

    for(int i = 1; i < (int) arr.size(); i++){
        arr[i - 1] = arr[i];
    }

    arr[arr.size() - 1] = temp;

    for(int i = 0; i < (int) arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;
}