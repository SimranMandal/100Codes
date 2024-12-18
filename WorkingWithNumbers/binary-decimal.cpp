#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(long long num){
    int i=0; 
    int decimal = 0;

    while(num){
        int digit = num % 10;
        decimal += digit * pow(2, i);
        num /= 10;
        i++;
    }

    return decimal;
}

int main(){
    long long binary;
    cout << "Enter any binary number : ";
    cin >> binary;

    int ans = binaryToDecimal(binary);

    cout << "The decimal form of " << binary << " is " << ans;

    return 0;
}