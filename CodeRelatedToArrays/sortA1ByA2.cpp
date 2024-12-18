#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sortA1ByA2(int arr1[], int n, int arr2[], int m, int ans[]){
    map<int, int> mp;
    int idx = 0;

    for(int i=0; i<n; i++){
        mp[arr1[i]]++;
    }

    for(int i=0; i<m; i++){
        if(mp[arr2[i]] != 0){
            for(int j=0; j<mp[arr2[i]]; j++){
                ans[idx++] = arr2[i];
            }
        }
        mp.erase(arr2[i]);
    }

    for (auto it : mp) {
 
    for (int j = 1; j <= it.second; j++)
            ans[idx++] = it.first;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
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

    int ans[n];
    sortA1ByA2(arr1, n, arr2, m, ans);

    printArray(ans, n);

    /*int arr1[] = { 20, 1, 20, 5, 7, 1, 9, 39, 6, 18, 18 };
    int arr2[] = { 20, 1, 18, 39 };*/

    return 0;
}