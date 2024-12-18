#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter any number : ";
    cin >> n;

    int sum = 0;
    

    for(int i=1; i<n; i++){
        if(n % i == 0){
           sum += i;
        }
    }

    if(sum > n) {
        cout << n << " is an Abundant number" << endl;
        cout << "Abundance is " << (sum-n);
    }
    else cout << n << " is not an Abundant number";

    return 0;
}

// int main(){
//     int n;
//     cout << "Enter any number : ";
//     cin >> n;

//     if(isAbundant(n)) cout << n << " is a Automorphic number.";
//     else cout << n << " is not a Automorphic number.";

//     return 0;
// }