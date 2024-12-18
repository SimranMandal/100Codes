/*Maximum Number of Handshakes in C++
Here we will discuss how to find the maximum number of handshakes which can happen between N number of people given the fact that any two people shake hands exactly once using C++ programming language.*/

#include<iostream>
using namespace std;

int main(){
    int num, total = 0;
    cout << "Enter number of people: ";
    cin >> num;

    total = num * (num-1) / 2;

   cout<<"For "<<num<<" people there will "<<total<<" handshakes";
     
    return 0;
}