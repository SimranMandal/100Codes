#include<iostream>
using namespace std;

//Method-3
int getSum(int n){
    if(n == 0) return n;

    return n + getSum(n-1);
}

int main(){
    cout << "Enter a number : ";
    int n;
    cin >> n;

    //Method-1
    // int sum = 0;
    // for(int i=1; i<=n; i++){
    //     sum += i;
    // }

    //Method-2
    //cout << n*(n+1)/2;

    cout << "Sum : " << getSum(n);

    return 0;
}