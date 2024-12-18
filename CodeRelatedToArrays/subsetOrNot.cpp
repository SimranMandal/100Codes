#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isSubset(int arr1[], int arr2[], int m, int n)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arr2[i] == arr1[j])
                break;
        }
 
        if (j == m)
           return 0;
    }
 
    return 1;
}

bool subset(int arr1[], int arr2[], int m, int n){
    unordered_map<int, int> mp;
    for(int i=0; i<m; i++){
        mp[arr1[i]] = 1;
    }

    for(int i=0; i<n; i++){
        if (mp.find(arr2[i]) == mp.end())
           return false;
    }

    return true;
}

int main(){
    int n, m;
    cin >> n >> m;
    int arr1[m], arr2[n];
    for(int i=0; i<m; i++){
        cin >> arr1[i];
    }

    for(int i=0; i<n; i++){
        cin >> arr2[i];
    }

    if (subset(arr1, arr2, m, n))
        cout<<"arr2[] is subset of arr1[] ";
    else
        cout<<"arr2[] is not a subset of arr1[]";

    return 0;
}