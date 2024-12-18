#include<iostream>
using namespace std;

int main(){
    char c;
    cout << "Enter any character : "; 
    cin >> c;

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        cout << "Alphabet " << c << " is a vowel.";
    }
    else{
        cout << "Alphabet " << c << " is a consonent.";
    }

    return 0;
}
