#include<iostream>
using namespace std;

int main(){
    cout<<"Enter a number : " << endl;
    int n;
    cin>>n; 

    if(n > 0) cout<<"Number " <<n<<" is positive.";
    else if(n < 0) cout<<"Number " <<n<<" is negative.";
    else cout<<"It is a zero.";

    return 0;
}