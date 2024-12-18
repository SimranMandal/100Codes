#include<iostream>
using namespace std;

int sumOfDivisors(int n){
    int sum = 0;

    for(int i=1; i<=n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int num1, num2;
    cout << "Enter two numbers : ";
    cin >> num1 >> num2;

    int sum1 = sumOfDivisors(num1);
    int sum2 = sumOfDivisors(num2);

    if(sum1/num1 == sum2/num2) cout << num1 << " and " << num2 << " are friendly pair.";
    else cout << num1 << " and " << num2 << " are not friendly pair.";

    return 0;

}