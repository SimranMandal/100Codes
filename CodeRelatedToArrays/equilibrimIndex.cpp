#include<iostream>
using namespace std;

int equilibrim(int arr[], int n){

    for(int i=0; i<n; i++){

        int leftSum = 0;
        for(int j=0; j<i; j++)
           leftSum += arr[i];

        int rightSum = 0;
        for(int j=i+1; j<n; j++)
            rightSum += arr[i];

        if(leftSum == rightSum) return i;
    }

    return -1;
}

int equilibrim2(int arr[], int n){

    int sum = 0;
    int leftSum = 0;
    for(int i=0; i<n; i++)  sum += arr[i];

    for(int i=0; i<n; i++){

        sum -= arr[i];

        if(sum == leftSum) return i;

        leftSum += arr[i];
    }

    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = equilibrim2(arr, n);  // -7, 1, 5, 2, -4, 3, 0

    cout << "Equilibrim Index is : " << ans;

    return 0;
}