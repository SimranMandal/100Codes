#include<iostream>
#include<math.h>
using namespace std;

void isArmstrongNo(int low, int high){

    for(int i=low; i<=high; i++){
        int result = 0, len = 0, temp, remainder;
        temp = i;
        while(temp){
            len++;
            temp /= 10;
        }

        temp = i;
        while(temp != 0){
            remainder = temp % 10;
            int power = round(pow(remainder, len));
            result = result + power;
            temp /= 10;
        }

        if(result == i){
            cout << i << " ";
        }
    }
}

int main(){
    int low, high;
    cout << "Enter the range : ";
    cin >> low >> high;

    
    isArmstrongNo(low, high);

    return 0;
}