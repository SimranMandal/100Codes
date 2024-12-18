#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void decimalToOctal(int num){
    int i=0;
    int octalArray[32];

    while(num){
        octalArray[i] = num % 8;
        num /= 8;
        i++;
    }

    for(int j=i-1; j>=0; j--){
        cout << octalArray[j];
    }
}

int main(){
    int decimal;
    cout << "Enter any decimal number : ";
    cin >> decimal;

    cout << "The octal form of " << decimal << " is ";

    decimalToOctal(decimal);
    
    return 0;
}