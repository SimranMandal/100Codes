#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
       cin >> arr[i];

    unordered_map<int, int> mp;

    for(auto x : arr){
        mp[x]++;
    }

    auto it = mp.begin();
    cout << "Repeating Elements are ";
    for(it; it != mp.end(); it++){
        if(it->second != 1) cout << it->first << " ";
    }

    return 0;
}