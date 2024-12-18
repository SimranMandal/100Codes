#include<iostream>
using namespace std;

//Method - 1 Recursion

int fibonacci(int n){
    if(n <= 1) return n;

    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    cout << "Enter any number : ";
    cin >> n;

    cout << "Fibonacci Series is : " << endl;
    for(int i=0; i < n; i++){
        
        cout << fibonacci(i) << ", ";

    }

    return 0;
}

