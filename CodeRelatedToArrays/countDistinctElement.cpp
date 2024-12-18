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
    int count = 0;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    //For count of element

    // for(int i=0; i<n; i++){
    //     if(mp[arr[i]] == 1){
    //         count++;
    //     }
    // }
    //cout << "Count of distint elements is " << count;

    //For printing elements

    
    auto it = mp.begin();
    cout << "Distinct elements are "; 
    for(it; it != mp.end(); it++){
        if(it->second == 1) cout << it->first <<  " ";
    }

    return 0;
}