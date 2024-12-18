#include<iostream>
using namespace std;

int main(){
    int digit, count = 0;;
    long long int num;
    cout << "Enter the digit and the number : ";
    cin >> digit >> num;

    while(num){
        int rem = num % 10;
        if(rem == digit){
            count++;
        }
        num /= 10;
    }

    cout << count << " Times.";

    return 0;
}