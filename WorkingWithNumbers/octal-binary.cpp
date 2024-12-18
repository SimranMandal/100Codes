#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void octalToBinary(int num){
    int decimal = 0, i = 0;

    while(num){
        int digit = num % 10;
        decimal += digit * pow(8, i);
        i++;
        num /= 10;
    }

    cout << " Decimal Form : " << decimal;

    long long binary = 0;
    int rem;
    i = 1;
  
    // converting decimal to binary here
    while (decimal != 0){
       rem = decimal % 2;
       decimal /= 2;
       binary += rem * i;
       // moving to next position ex: units -> tens
	   i *= 10;
    }
  
 
    cout << binary;
}

int main(){
    long long octal;
    cout << "Enter any binary number : ";
    cin >> octal;

    cout << "The binary form of " << octal << " is " ;

    octalToBinary(octal);

    return 0;
}