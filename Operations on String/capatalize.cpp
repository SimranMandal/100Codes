#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[100] = "hi i am simran its very good to code" ;

    int size = strlen(str);

    for(int i=0; i<size; i++){
        if(i == 0 || i == size-1){
            str[i] = toupper(str[i]);
        }

        if(str[i] == ' '){
            str[i-1] = toupper(str[i-1]);
            str[i+1] = toupper(str[i+1]);
        }
    }

    cout << str;

    return 0;
}

