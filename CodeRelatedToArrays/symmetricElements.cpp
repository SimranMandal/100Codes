#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cin >> n;
    // int arr[n][n];
    // int i=0, j = 0;
    // for(int i=0; i<n; i++){
    //     for(int j=0; i<n; j++){
    //         cin >> arr[i][j];
            
    //     }
    //     cout << arr[i][j] << " ";
    // }

    int arr[5][2];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[1][0] = 3;
    arr[1][1] = 4;
    arr[2][0] = 5;
    arr[2][1] = 1;
    arr[3][0] = 4;
    arr[3][1] = 3;
    arr[4][0] = 1;
    arr[4][1] = 5;

    // Method 1
    // for(int i=0; i<5; i++){
    //     for(int j=i+1; j<5; j++){
    //         if(arr[i][0] == arr[j][1] && arr[i][1] == arr[j][0]){  
    //             cout << "(" << arr[i][0] << ", " << arr[i][1] << ")" ;
    //         }
    //     }
    // }

    //Method 2

    unordered_map<int, int> mp;
    for(int i=0; i<5; i++){
        int first = arr[i][0], sec = arr[i][1];

        if(mp.find(sec) != mp.end() && mp[sec] == first){
            cout << "(" << sec << ", " << first << ")" ;
        }
        else{
            mp[first] = sec;
        }
    }

    return 0;
}