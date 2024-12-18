#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void decimalToHexa(int num){
    int i=0;
    char hexa[100];

    while(num){
        int rem = num %16;
        if(rem < 10){
            hexa[i] = rem + 48;
            i++;
        }
        else{
            hexa[i] = rem + 55;           
            i++;
        }
        num /= 16;
    }

    for(int j=i-1; j>=0; j--){
        cout << hexa[j];
    }
}

int main(){
    int decimal;
    cout << "Enter any decimal number : ";
    cin >> decimal;

    cout << "The hexadecimal form of " << decimal << " is ";

    decimalToHexa(decimal);
    
    return 0;
}