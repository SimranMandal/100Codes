#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n, x;
    // cout << "Enter the values of n and x : ";
    // cin >> n, x;

     int n = 7, x = 3;

    int count = 0;

    for(int i=1; i<=n; i++){
        int countOfDivisor = 0;
        for(int j=1; j<=sqrt(i); j++){
            if(i%j == 0){
                if(i/j != j){
                    countOfDivisor += 2;
                }
                else countOfDivisor++;
            }
        }
        cout << countOfDivisor << " ";

        if(countOfDivisor == x) count++;
    }

    // cout << "hi";

    cout << endl;
    cout << "count : " << count;

    return 0;
}

