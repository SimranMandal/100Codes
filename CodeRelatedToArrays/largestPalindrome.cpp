#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int reverse = 0, temp = n;

    while(temp > 0){
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    if(n == reverse) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
       cin >> arr[i];

    int number = INT_MIN;

    for(int i=0; i<n; i++){
        if(isPalindrome(arr[i]) && arr[i] > number){
            number = arr[i];
        }
    }

    if(number == INT_MIN) number = -1;

    cout << "The largest palindrome is " << number;

    return 0;
}