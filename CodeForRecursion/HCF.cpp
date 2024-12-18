#include<iostream>
using namespace std;

int hcf(int num, int pum){
    if(num == 0) return pum;

    if(pum == 0) return num;

    if(num == pum) return num;

    if(num > pum)
       return hcf(num-pum, pum);

    return hcf(num, pum-num);

}

int main(){
    int n, p;
    cin >> n >> p;

    cout << "HCF of "<< n << " and "  << p << " is " << hcf(n, p);

    return 0;
}