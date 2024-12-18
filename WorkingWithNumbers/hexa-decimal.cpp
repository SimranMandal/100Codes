#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int hexaToDecimal(string num){
    int decimal = 0, index = 0;

    for(int i=num.size()-1; i>=0; i--){
        if(num[i] >= '0' && num[i] <= '9'){
            // whenever current num[i] is in range '0' - '9' 
            // ascii int value can be fetched 
            // by subtracting 48 (Refer Ascii table) as ASCII val 0 : 48 

            int digit = int(num[i]) - 48;
            decimal += digit * pow(16, index);
            index++;
        }

        if(num[i] >= 'A' && num[i] <= 'F'){
             // whenever current num[i] is in range 'A' - 'F' 
            // ascii int value can be fetched 
            // by subtracting 55 (Refer Ascii table) as 
            // ASCII val A : 65 and A must result 10 as value 
            
            int digit = int(num[i]) - 55;
            decimal += digit * pow(16, index);
            index++;
        }
    }
    return decimal;
}

int main(){
    string hexa;
    cout << "Enter any hexadecimal number : ";
    cin >> hexa;

    int ans = hexaToDecimal(hexa);

    cout << "The decimal form of " << hexa << " is " << ans;

    return 0;
} 