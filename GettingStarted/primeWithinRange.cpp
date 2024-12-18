#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n < 2){
        return false;
    }
    else{
        for(int i=2; i<sqrt(n); i++){
            if(n % i == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int low, high;
    cout << "Enter values of low and high : ";
    cin >> low >> high;

    //int low = 1, high = 100;
    
    for(int i=low; i<high; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }

    return 0;
}