#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr;

    for(int i = 0; i < n; i++){
        int num; cin >> num;
        arr.emplace_back(num);
    }

    cout << "\n";
    cout << "D: ";
    int d; cin >> d;
    d = d % n;

    vector<int> temp;

    for(int i = 0; i < d; i++){
        temp.emplace_back(arr[i]);
    }

    for(int i = d; i < n; i++){
        arr[i - d] = arr[i];
    }


    int j = 0;
    for(int i = n - d; i < n; i++){
        arr[i] = temp[j];
        j++;
    }

    for(auto a : arr){
        cout << a << " ";
    }

    return 0;
}