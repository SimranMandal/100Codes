#include <bits/stdc++.h>
using namespace std;

void rotateLeft(vector<int>& a, int k, int n){

    if (n == 0)
      return;

    k = k % n;
    if (k > n)
       return;
  
    vector<int> t(k);

    for(int i=0; i<k; i++){
        t[i] = a[i];
    }

    for(int i=0; i<n-k; i++){
        a[i] = a[i+k];
    }

    for(int i=n-k; i<n; i++){
        a[i] = t[i-n+k];
    }
}

void rightRotate(vector<int>& a, int k, int n){
    if (n == 0)
      return;

    k = k % n;
    if (k > n)
       return;
  
    vector<int> t(n);

    for(int i=n-k; i<n; i++){
        t[i-n+k] = a[i];
    }

    // for(int i=0; i<n-k; i++){
    //     //a[i] = t[i+k];
    //     t[i+k] = a[i];
    // }

    for(int i=n-k-1; i>=0; i--){
        a[k+i] = a[i];
    }

    for(int i=0; i<k; i++){
        //t[i] = a[i];
        a[i] = t[i];
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    // rotateLeft(a, k, n);
    rightRotate(a, k, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;

}