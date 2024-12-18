#include<iostream>
using namespace std;

//  int main(){
//     int num1, num2, hcf = 1;
//     cout << " Enter two numbers : ";
//     cin >> num1 >> num2;

//     for(int i=1; i<num1 || i<num2; i++){
//         if(num1%i == 0 && num2%i == 0){
//             hcf = i;
//         }
//     }

//     cout << "HCF is " << hcf;

//     return 0;
// }

int main(){
    int num1, num2;
    cout << " Enter two numbers : ";
    cin >> num1 >> num2;

    while(num1 != num2){
        if(num1 > num2) num1 -= num2;
        else num2 -= num1;
    }

    cout << "HCF is " << num1;

    return 0;
}