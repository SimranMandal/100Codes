#include<iostream>
using namespace std;

int isHarshad(int n){
    int sum = 0, digit = 0;
    int temp = n;
    while(temp){
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    if(n % sum == 0) return 1;
    return 0;
}

int main(){
    int n;
    cout << "Enter any number : ";
    cin >> n;

    if(isHarshad(n)) cout << n << " is a Automorphic number.";
    else cout << n << " is not a Automorphic number.";

    return 0;
}