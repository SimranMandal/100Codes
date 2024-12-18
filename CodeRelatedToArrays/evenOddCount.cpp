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

    int even = 0, odd = 0;

    // for(int i=0; i<n; i++){
    //     if(arr[i] % 2 == 0){
    //         even++;
    //     }
    //     else odd++;
    // }

    for(int i=0; i<n; i++){
        if(arr[i] & 1){
            odd++;
        }
        else even++;
    }

    

    cout << "Count of even and odd numbers are " << even << " and " << odd;

    return 0;
}