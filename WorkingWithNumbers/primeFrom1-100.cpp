#include<iostream>
using namespace std;

int isPrime(int num){
    bool prime = true;
    if(num < 2) return 0;

    for(int i=2; i<=num/2; i++){
        if(num % i == 0){
            prime = false;
        }
    }
    if(prime) return 1;
    return 0;
}

int main(){
    int l, h;
    cout << "Enter the range : ";
    cin >> l >> h;

    for(int i=l; i<=h; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }

    return 0;
}