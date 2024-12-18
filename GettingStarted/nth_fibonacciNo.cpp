#include<iostream>
using namespace std;

int fibo(int n){
    if(n <= 1) return n;

    return fibo(n-1) + fibo(n-2);
}


//Space Optimization
int fiboSeries(int n){
    int a = 0, b = 1, c, i;
    if(n == 0) return a;
    if(n == 1) return b;

    for(int i=2; i<n; i++){
        c = a + b;
        a = b;
        b = c;
    }

    return c;
}

int main(){
    int n;
    cout << "enter any number : ";
    cin >> n;

    //cout << "The " << n << "th fibonacci number is : " << fibo(n);
    cout << fiboSeries(n);

    return 0;
}

