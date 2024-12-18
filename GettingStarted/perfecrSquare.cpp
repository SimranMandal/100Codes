#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool perfectSquare(long double n){

    if(n >= 0){
       double sq = sqrt(n);
       if(n == sq*sq) return true;
    }
    return false;

}

int main(){
    long double n;
    cout << "Enter any number : ";
    cin >> n;

    if(perfectSquare(n)) cout << n << " is a perfect square.";
    else cout << n << " is not a perfect square.";

    return 0;
}