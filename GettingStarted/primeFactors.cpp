#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> primeFactor(int n){
    vector<int> ans;

    for(int i=2; i<=n; i++){
        if(n % i == 0){
            ans.push_back(i);
        }

        while(n % i == 0){
            n = n/i;
        }
    }

    return ans;
}

int main(){

    int n;
    cout << "Enter any number : ";
    cin >> n;

    vector<int> ans = primeFactor(n);
    cout << "Prime Factors for " << n << ": ";
    for(auto factor: ans){
        cout << factor << " ";
    }
    cout << endl;

    return 0;
}

