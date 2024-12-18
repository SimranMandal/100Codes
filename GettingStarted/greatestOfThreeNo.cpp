#include<iostream>
using namespace std;

int main(){
    cout << "Enter values of a : ";
    int a;
    cin >> a;
    cout << "Enter values of b : ";
    int b;
    cin >> b;
    cout << "Enter values of c : ";
    int c;
    cin >> c;

    //Method 1
    // if(a > b && a > c){
    //     cout << "Greatest number is " << a << endl;
    // }
    // else if(b > a && b > c){
    //     cout << "Greatest number is " << b << endl;
    // }
    // else if(c > a && c > b){
    //     cout << "Greatest number is " << c << endl;
    // }

    //Method 2
    int temp, ans;

    temp = a > b ? a : b;
    ans = temp > c ? temp : c;

    cout<<"Greatest number is : "<< ans;

    return 0;
}