/* There are many theories which express numbers as a sum of two primes like Goldbach’s Conjecture which states that any even number greater than 2 can be   expressed as a sum of two primes.
Here we will check for all the numbers if they can be expressed as sum of two primes or not.*/

#include<iostream>
using namespace std;

int isPrime(int num){
    bool prime = true;

    if(num == 0 && num == 1) return 0;

    for(int i=2; i<=num/2; i++){
        if(num%i == 0){
            prime = false;
            break;
        }
    }

    return prime;
}

int main(){
    int num;
    cout << "Enter any number : ";
    cin >> num;

    bool ans = false;

    for(int i=1; i<=num/2; i++){
        if(isPrime(i)){
            if(isPrime(num-i)){
                cout << num << " = " << i << " + " << num-i << endl;
                ans = 1;
            }
        }
    }

    if(!ans)
        cout << num << " can't be expressed as sum of two prime numbers.";

    return 0;
}


