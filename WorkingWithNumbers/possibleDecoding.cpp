/*1 = A, 2 = B, 3 = C, . . . . , 26 = Z.
The decoding programs are the most possible questions asked and are largely practiced in C  programming. The program counts the number of possible decoding’s of the entered digit by the user of the given sequence.
For example :- if the digit sequence is “12” then there are two possible decoding’s for this – One of them is ‘AB’ when we decode 1 as ‘A’ and 2 as ‘B’. Now we can also decode this digit sequence “12” as ‘L’ when we decode digits 1 and 2 taken together as an integer 12.

Now let’s take another example for reference,

Sequence = 131

Possible decoding (1, 3, 1,)    = ACA
Possible decoding (13, 1)   = MA
So, the total possible decoding’s of sequence 131 is 2.*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int possibleCount(char *dig, int size){
    int cnt[size+1];
    cnt[0] = 1;
    cnt[1] = 1;
    
    for(int k=2; k<=size; k++){
        cnt[k] = 0;

        if(dig[k-1] > '0'){
            cnt[k] = cnt[k-1];
        }

        if(dig[k-2] == '1' || dig[k-2] == '2' && dig[k-1] < '7'){
            cnt[k] += cnt[k-2];
        }
    }

    return cnt[size];
}

int main(){
    char dig[15];
    cout<<"Enter the sequence : "; cin>>dig;
    int a = strlen(dig);
    cout<<"Possible count of decoding of the sequence : "<< possibleCount(dig, a);
    
    return 0;
}