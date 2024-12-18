#include<iostream>
using namespace std;

void reverse(int n){
    if(n < 10) cout << n;

    else{
        cout << n%10;
        reverse(n/10);
    }
}

int reverse1(int n){
    int rev = 0;
    while(n != 0){
        int digit = n % 10;
        rev = digit + rev * 10;
        n /= 10;
    }

    return rev;
}

int main(){
    int n;
    cin >> n;

    cout << reverse1(n);
}