#include<iostream>
using namespace std;

int gcd(int n1, int n2){
    int gcd = 1;
    for(int i=1; i<=n1 && 1<=n2; i++){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
    return gcd;
}

int main(){
    int num1, den1;
    cout << "Enter values of first numerator ans denominator : ";
    cin >> num1 >> den1;

    int num2, den2;
    cout << "Enter values of second numerator ans denominator : ";
    cin >> num2 >> den2;

    int lcm = (den1*den2) / gcd(den1, den2);

    int sum = (num1*lcm)/den1 + (num2*lcm)/den2;

    int num3 = sum / gcd(lcm, sum);
    int den3 = lcm / gcd(lcm, sum);

    cout<<num1<<"/"<<den1<<" + "<<num2<<"/"<<den2<<" = "<<num3<<"/"<<den3;

    return 0;
}