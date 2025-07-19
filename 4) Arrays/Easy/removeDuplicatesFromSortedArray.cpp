#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {0, 0, 1, 1, 2, 2, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int writeIndex = 0;

    for(int i = 1; i < n; i++){
        if(arr[i] != arr[i - 1]){
            arr[writeIndex] = arr[i];
            writeIndex++;   
        }
    }

    for(int i = 0; i < writeIndex; i++){
        if(arr[i] != -1) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}