#include<iostream>
using namespace std;

int main(){
    cout << "Enter a number : ";
    int n;
    cin >> n;

    if(n % 2 == 0) cout << "Number " << n << " is an even number.";
    else if(n % 2 == 1) cout << "Number " << n << " is an odd number.";

    return 0;
}