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

    int result = INT_MAX;

    for(int i=0; i<n; i++){
        int sum = 0;

        for(int j=0; j<n; j++){
            
            int x = arr[i] - arr[j];

            if(x < 0) sum += -x;
            else sum += x;
        }

        if(result > sum) result = sum;
    }

     cout<<"Minimum Absolute Difference Sum is "<<result;

    return 0;

}