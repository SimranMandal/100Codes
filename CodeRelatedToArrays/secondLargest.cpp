#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int mx1 = INT_MIN, mx2 = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] > mx1){
            mx2 = mx1;
            mx1 = arr[i];
        }

        if(arr[i] < mx1 && arr[i] > mx2){
            mx2 = arr[i];
        }
    }

    cout << "Second largest number is : " << mx2;

    return 0;
}