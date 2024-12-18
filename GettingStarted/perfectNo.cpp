#include<iostream>
using namespace std;

bool checkPerfect(int n){
    int sum = 0;
    int temp = n;

    for(int i=1; i<=n/2; i++){
        //getting divisor summing to sum
        if(temp % i == 0){
            sum += i;
        }
    }

    if(sum == n) return true;
    else return false;
}

int main(){
    int n;
    cout << "Enter any number : ";
    cin >> n;

    if(checkPerfect(n)) cout << n << " is a perfect number.";
    else cout << n << " is not a perfect number.";

    return 0;
}