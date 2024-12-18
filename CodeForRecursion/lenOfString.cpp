#include<iostream>
using namespace std;

int len(char* s){
    int cnt = 0;
    while(*s != '\0'){
        cnt++;
        s++;
    }

    return cnt;
}

int main(){
    char s[] = "simran";

    cout << "Length : " << len(s);

    return 0;
}
