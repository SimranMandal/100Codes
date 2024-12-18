#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// const string withoutBrackets(const string& str){
//     int n = str.length();
//     string str2[n];
//     int i=0, j=0;

//     while(str != '/0'){
//         if(str[i] == '(' || str[i] == ')'){
//             str2[j++] = str[i];
//         }
//         i++;
//     }

//     str2[j] = '/0';

//     return str2;

// }

int main(){
    string str[100];
    cout << "Enter a string with brackets : ";
    getline(cin , str);

    cout << "String without brackets : " << withoutBrackets(str);


    return 0;
}