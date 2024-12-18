#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void binaryToOctal(long long num){
    int octal = 0, count = 1, i = 0, pos = 0;
    int octalArray[32] = {0};

    while (num)
    {
        int digit = num%10;
        octal += digit * pow(2, i);
        i++;
        num /= 10;

        // placing current octalsum for 3 pair in array index position
        octalArray[pos] = octal;

        // whenever we have read next 3 digits
        // setting values to default
        // increasing pos so next values can be placed at next array index
        if(count % 3 == 0){
            octal = 0;
            i=0;
            pos++;
        }
        count++;
    }

    for(int j=pos; j>=0; j--){
        cout << octalArray[j];
    }
    
}

int main(){
    long long binary;
    cout << "Enter any binary number : ";
    cin >> binary;

    cout << "The octal form of " << binary << " is ";

    binaryToOctal(binary);
    
    return 0;
}