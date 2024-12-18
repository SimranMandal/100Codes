#include<iostream>
using namespace std;

int largest(int arr[], int n){
    if(n == 1) return arr[0];

    int ans = arr[0];
    for(int i=0; i<n; i++){
        ans = max(arr[i], ans);
    }

    return ans;
}

int main(){
    int n; 
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Largest Number is : " << largest(arr, n);

    return 0;
}