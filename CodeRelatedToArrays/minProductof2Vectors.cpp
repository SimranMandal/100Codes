#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }

    for(int i=0; i<n; i++){
        cin >> arr2[i];
    }

    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr1[i] < arr1[j]){
    //             int temp = arr1[i];
    //             arr1[i] = arr1[j];
    //             arr1[j] = temp;
    //         }  
    //     }
    //     //cout << arr1[i] << " ";
    // }

    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr2[i] > arr2[j]){
    //             int temp = arr2[i];
    //             arr2[i] = arr2[j];
    //             arr2[j] = temp;
    //         }  
    //     }
    //     // cout << endl;
    //     // cout << arr2[i] << " ";
    // }

    
    sort(arr1, arr1+n);
    sort(arr2, arr2+n, greater<int>());

    int product = 0;

    for(int i=0; i<n; i++){
        product += arr1[i] * arr2[i];
    }

    cout << product;  

    return 0;
}
