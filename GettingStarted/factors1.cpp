#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void getFactors(int n){
    int i;
    vector<int> v;

    for(int i=1; i<=sqrt(n); i++){
        if(n % i == 0){
            if(i == n/i){
                cout << i << " ";
            }
            else{
                cout << i << " ";
                v.push_back(n/i);
            }
        }
    }

    reverse(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}

int main(){
    int n;
    cout << "enter any number : ";
    cin >> n;

    getFactors(n);

    return 0;
}