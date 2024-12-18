#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i] < smallest) 
           smallest = arr[i];

        if(arr[i] > largest) 
           largest = arr[i];
    }

    cout << " Largest Number : " << largest << endl;
    cout << " Smallest Number : " << smallest << endl;

    return 0;
}