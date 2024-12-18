/*Program to Replace all 0’s with 1 in a given integer*/

#include<iostream>
using namespace std;

int main(){
    int num, num2 = 0;
    cout << "Enter any number : ";
    cin >> num;

    if(num == 0) num = 1;

    while (num > 0)
    {
        int rem = num % 10;

        if(rem == 0) rem = 1;

        num /= 10;
        num2 = num2*10 + rem;

        
    }

    //cout << "num " <<num2;
    
    num = 0;

    while(num2 > 0){
        int rem = num2 % 10;
        num2 /= 10;
        num = num*10 + rem;
    }

    cout<<"Converted number is: "<<num;

    return 0;
}