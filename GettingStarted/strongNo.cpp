#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0) return 1;

    return n * factorial(n-1);
}

int isStrong(int n){
    int sum = 0, digit = 0;
    int temp = n;

    while(temp != 0){
        digit = temp % 10;
        sum = sum + factorial(digit);
        temp /= 10;
    }
    return sum == n;
}

int main(){
    int n;
    cout << "Enter any number : ";
    cin >> n;

    if(isStrong(n)) cout << n << " is a strong number.";
    else cout << n << " is not a strong number.";

    return 0;
}