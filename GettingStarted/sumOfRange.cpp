#include<iostream>
using namespace std;

int main(){
    cout << "Enter values of a : ";
    int a;
    cin >> a;
    cout << "Enter values of b : ";
    int b;
    cin >> b;

    //int sum = 0;
    // for(int i=a; i<=b; i++){
    //     sum += i;
    // }

    int sum =  b*(b+1)/2 - a*(a+1)/2+a;

    cout<< "Sum : " << sum;

    return 0;
}