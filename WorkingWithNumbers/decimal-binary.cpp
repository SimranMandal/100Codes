#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void decimalToBinary(int num){
    int i=0;
    int binaryArray[32];

    while(num){
        binaryArray[i] = num % 2;
        num /= 2;
        i++;
    }

    for(int j=i-1; j >=0; j--){
        cout << binaryArray[j];
    }
}

int main(){
    int decimal;
    cout << "Enter any decimal number : ";
    cin >> decimal;

    cout << "The biary form of " << decimal << " is ";

    decimalToBinary(decimal);

    

    return 0;
}