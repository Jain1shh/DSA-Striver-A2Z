#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1;
    cin >> n1;
    int array1[n1];
    
    for(int i = 0; i < n1; i++){
        cin >> array1[i];
    }

    int n2; 
    cin >> n2;
    int array2[n2];

    for(int i = 0; i < n2; i++){
        cin >> array2[i];
    }

    set<int> uni;

    for(auto num : array1){
        uni.insert(num);
    }

    for(auto num : array2){
        uni.insert(num);
    }

    for(auto num : uni){
        cout << num << " ";
    }



    
    return 0;
}