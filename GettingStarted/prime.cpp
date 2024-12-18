#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    cout << "Enter any number : ";
    int n;
    cin >> n;

    bool isPrime = true;

    if(n < 2){
        //cout << n <<" is not prime.";
        isPrime = false;
    }
    else {
        for(int i=2; i < sqrt(n); i++){
            if(n%i==0){
                isPrime = false;
                break;
            }
        }
    }
    string result = isPrime ? " is Prime." : " is not Prime.";
    cout << n << result;

    return 0;
}