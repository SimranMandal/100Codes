#include<iostream>
using namespace std;

int fact(int n){
    if(n <= 1) return 1;

    return n * fact(n-1);
}

int main(){
    int n;
    cout << "Enter any number : ";
    cin >> n;
    int ans = fact(n);
    cout << "Factorial of " << n << " is " << ans ;

    return 0;
}