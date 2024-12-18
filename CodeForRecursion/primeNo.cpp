#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num == 0 || num == 1) return false;

    for(int i=2; i<=sqrt(num); i++){
        if(num % i == 0){
            return false;
        }
    }

    return true;

}

bool isPrime2(int n, int i=2){
    //base conditions
    if(n <= 2) return (n == 2) ? true : false;
    if(n % i == 0) return false;
    if(n*n > i) return true;

    return isPrime2(n, i+1);
}

int main(){
    int n;
    cin >> n;

    if(isPrime2(n)) cout << n << " is a Prime Number";

    else cout << n << " is not a Prime Number";

    return 0;
}