#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Method 1 (not accurate)

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     for(int i=0; i<n; i++){

//         for(int j=0; j<n/2; j++){
//             if(arr[j] > arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }

//         for(int j=n/2; j<n-1; j++){
//             if(arr[j] < arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         } //3, 2, 4, 1, 10, 30, 40, 20
//     }

//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


/*-----------------------------------------------------------------------------------------------------------------------------------------------*/


//Method 2

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);


    for(int i=0; i<n/2; i++){
        cout << arr[i] << " ";
    }

    for(int i=n-1; i>=n/2; i--){
        cout << arr[i] << " ";
    }


    return 0;
}