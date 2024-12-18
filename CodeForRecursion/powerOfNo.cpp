#include<iostream>
using namespace std;

int power(int base, int p){

    cout << base << " " << p << endl;
    if(p == 0) return 1;

    if(p == 1){
        return base;
    }

    int ans = base * power(base, p-1);

    return ans;
}


int power2(int base, int p){
    if(base == 1 || p == 0) return 1;
    if(p == 1) return base;

    int result = 1;
    while(p--){
        result *= base;
    }

    return result;
}

int main(){
    int base, p;
    cin >> base >> p;

    cout << base << " raised to the power " << p << " is " << power(base, p);

    return 0;
}