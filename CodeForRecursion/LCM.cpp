#include<iostream>
using namespace std;

int hcf(int n, int p){
    if(n == 0) return p;

    if(p == 0) return n;

    if(n == p) return n;

    if(n > p) return hcf(n-p, p);

    return hcf(n, p-n);
}

int main(){
    int n, p;
    cin >> n >> p;

    int HCF = hcf(n, p);
    int lcm = (n*p) / HCF;

    cout << "LCM of "<< n << " and "  << p << " is " << lcm;

    return 0;
}