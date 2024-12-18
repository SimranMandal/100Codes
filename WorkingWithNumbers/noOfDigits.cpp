#include<iostream>
using namespace std;

int main(){
    long long int num;
    cout << "Enter any number : ";
    cin >> num;
    int n = num;

    int count = 0;

    while(num){
        //int digit = num % 10;
        count++;
        num /= 10;
    }

    cout << "Count of digits in " << n << " is " << count;

    return 0;
}