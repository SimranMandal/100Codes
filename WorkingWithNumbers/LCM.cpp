#include<iostream>
using namespace std;

// int main(){
//     int num1, num2;
//     cout << " Enter two numbers : ";
//     cin >> num1 >> num2;

//     int mx = max(num1, num2);

//     int lcm = 1;
//     for(int i=mx; i<=num1*num2; i++){  // or can also do (i+mx) jump instead of i++
//         if(i % num1 == 0 && i % num2 == 0){
//             lcm = i;
//             break;
//         }
//     }

//     cout << "LCM is " << lcm;

//     return 0;
// }

int getHCF(int n, int m){

    if(n == 0) return m;

    if(m == 0) return n;

    if(n == m) return n;

    if(n > m){
        return getHCF(n-m, m);
    }
    else return getHCF(n, m-n);

}

int main(){
    int num1, num2;
    cout << " Enter two numbers : ";
    cin >> num1 >> num2;

    int hcf = getHCF(num1, num2);
    
    int lcm = (num1*num2)/hcf;
    cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<lcm;

    return 0;

}