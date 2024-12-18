/*There is an array of n elements, replace each element of the array by its corresponding rank. The minimum value element will have the highest rank.*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void changeByRank(int arr[], int n){
    int newArray[n];
    copy(arr, arr+n, newArray);

    sort(newArray, newArray+n);

    map<int, int> ranks;
    int rank = 1;

    for(int i=0; i<n; i++){
        if(ranks[newArray[i]] == 0){
            ranks[newArray[i]] = rank;
            rank++;
        }
    }

    for(int i=0; i<n; i++){
        arr[i] = ranks[arr[i]];
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    changeByRank(arr, n);

    return 0;

}