#include<iostream>
using namespace std;

int reverse(int n){
    int rev  = 0;

    while(n != 0){
        int digit = n%10;
        rev = rev*10 + digit;
        n /= 10;
    }

    return rev;
}

int main(){
    int n;
    cout << "Enter any number : ";
    cin >> n;

    int result = reverse(n);
    
    if(n == result){
        cout << n << " is a Palindrome.";
    }
    else{
        cout << n << " is not a Palindrome.";
    }

    return 0;
}