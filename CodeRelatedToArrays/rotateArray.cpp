#include<iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int temp[n];
    for(int i=0; i<n; i++){
        temp[i] = arr[i];
    }

    int x = k;

    for(int i=0; i<n; i++){
        arr[i] = arr[x++];
    }

    x = 0;
    for(int i=n-k; i<n; i++){
        arr[i] = temp[x++]; 
    }

    cout << "Rotated array is : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;

}