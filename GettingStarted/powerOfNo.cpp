#include<iostream>
using namespace std;

int main(){
    double base;
    int exponent;
    cout << "Enter base and exponent : ";
    cin >> base >> exponent;

    // int base = 1.5, exponent = -2;
    double res = 1.0;
    int temp = exponent;

    while(exponent  > 0){
        res *= base;
        exponent--;
    }

    while(exponent < 0){
        res /= base;
        exponent++;
    }

    cout << "The value of " << base << " to the power " << temp << " is " << res;
    //cout << res;

    return 0;
}


