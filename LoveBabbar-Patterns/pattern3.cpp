/*5
12345
2345
345
45
5*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i=1;
    while(i <= n){
        int j=i;
        while(j <= n){
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}