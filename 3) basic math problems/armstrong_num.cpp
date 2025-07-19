#include<iostream>
using namespace std;

int check(int x){
    
    int sum = 0;
    int ld = 0;

    int temp = x;

    int cntDigits = 0;

    while(temp>0){
        temp = temp/10;
        cntDigits++;
    }

    while (x != 0)
    {
        ld = x % 10;

        sum = sum + pow(ld, cntDigits);

        x = x/10;
    }
    return sum;
}

int main(){

    int num = 1634;
    cout << num << " is armstrong or not ? " << check(num);
    cout << endl;
    return 0;
}