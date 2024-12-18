#include<iostream>
using namespace std;

int isAutomorphic(int n){
    int sq = n*n;

    if(sq % 10 != n % 10) return 0;
    else{
        sq /=10;
        n /= 10;
    }
    return 1;
}

int main(){
    int n;
    cout << "Enter any number : ";
    cin >> n;

    if(isAutomorphic(n)) cout << n << " is a Automorphic number.";
    else cout << n << " is not a Automorphic number.";

    return 0;
}