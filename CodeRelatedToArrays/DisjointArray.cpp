#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int isDisjoint(int arr1[], int arr2[], int n, int m){
    unordered_map<int, int> mp;

    for(int i=0; i<n; i++){
        mp[arr1[i]]++;
    }

    for(int i=0; i<m; i++){
        if(mp.find(arr2[i]) != mp.end()){
            return 0;
        }
    }
    return 1;
}

int disjoint(int arr1[], int arr2[], int n, int m){
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);

    int i=0, j=0;
    while(i != n && j != m){
        if(arr1[i] < arr2[j])
           i++;
        else if(arr1[i] > arr2[j])
           j++;
        else 
           return 0;
    }
    return 1;
}


int main(){
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }

    for(int i=0; i<m; i++){
        cin >> arr2[i];
    }

    if(disjoint(arr1, arr2, n, m))
    cout<<"Yes";
    
    else cout<<"No";

    return 0;

}