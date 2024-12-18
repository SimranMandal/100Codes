#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(char &a, char &b)
{
    char t = a;
    a = b;
    b = t;
}

int findCeil(const string &str, char first, int l, int h)
{
    int ceilIndex = l;
    for (int i = l + 1; i <= h; i++)
        if (str[i] > first && str[i] < str[ceilIndex])
            ceilIndex = i;
    return ceilIndex;
}

void sortedPermutations(string str){
    int size = str.length();

    sort(str.begin(), str.end());

    bool flag = false;

    while(!flag){
        cout << str << endl;

        int i;
        for(i=size-2; i>=0; --i)
            if(str[i] < str[i+1]) 
               break;
        

        if(i == -1) 
           flag = true;

        else{
            int ceilIndex = findCeil(str, str[i], i+1, size-1);

            swap(str[i], str[ceilIndex]);

            sort(str.begin()+i+1, str.end());
        }
    }
}


int main(){
    string str;
    cin >> str;

    sortedPermutations(str);

    return 0;
}


