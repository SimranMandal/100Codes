
#include<iostream>
#include<math.h>
using namespace std;

int order(int num){
    int len = 0;

    while(num){
        ++len;
        num = num / 10;
    }
    return len;
}

bool isArmstrong(int num, int len){
    int sum = 0, temp = num;
    
    while(temp != 0){
        int digit = temp % 10;
        sum = sum + pow(digit, len);
        temp /= 10;
    };

    return num == sum;
}

int main(){
//     // int n;
//     // cout << "Enter any number : ";
//     // cin >> n;

//     // int l = order(n);

//     // if(isArmstrong(n, l)){
//     //     cout << "Is Armstrong";
//     // }
//     // else{
//     //     cout << "Is Not An Armstrong";
//     // }

//     // return 0;

    int n;
    cout << "Enter any number : ";
    cin >> n;

    int num , remainder, len = 0, result = 0;
    num = n;
    while(num != 0){
        num = num / 10;
        len++;
        // num = num / 10;
    }

    num = n;

    while(num != 0){
        remainder = num % 10;
        int power = round(pow(remainder, len));
        result = result + power;
        num = num /10;
    }

    if(result== n){
        cout << "Is Armstrong";
    }
    else{
        cout << "Is Not An Armstrong";
    }

    return 0;
 }

