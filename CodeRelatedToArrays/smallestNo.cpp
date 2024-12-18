#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int smallest(int arr[], int n){
    if(n == 1) return arr[0];

    int ans = arr[0];

    for(int i=0; i<n; i++){
        ans = min(ans, arr[i]);
    }

    return ans;
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Smallest Number : " << smallest(arr, n);

    return 0;
}