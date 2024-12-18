#include<iostream>
using namespace std;

int main(){
    cout << "Enter a number : ";
    int n;
    cin >> n;

    int sum = 0;

    while(n != 0){
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }

    cout << "Sum of digits is " << sum;

    return 0;
}