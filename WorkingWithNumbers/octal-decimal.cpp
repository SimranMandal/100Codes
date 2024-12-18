#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int octalToDecimal(long long num){
    int i=0, decimal = 0;

    while(num){
        int digit = num % 10;
        decimal += digit * pow(8, i);
        num /= 10;
        i++;
    }

    return decimal;
}

// int main(){
//     long long octal;
//     cout << "Enter any binary number : ";
//     cin >> octal;

//     int ans = octalToDecimal(octal);

//     cout << "The decimal form of " << octal << " is " << ans;

//     return 0;
// }

int main()
{
    // important input has to be in string format only here
    string binaryNumber;
    cin >> binaryNumber;
    
    int base = 8;
    // format stoi(binary_in_string_format, 0, base_value)
    cout << stoi(binaryNumber, 0, base);
 
    return 0;
}