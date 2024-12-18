#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){   
     
    int arr[6] = {2, 7, 10, 1, 3, 8};

    int max1 = INT_MIN, max2 = INT_MIN;

    for(int i=0; i < 6; i++){
        if(arr[i] >= max1){
            max2 = max1;
            max1 = arr[i];
        }

        else if(arr[i] >= max2){
            max2 = arr[i];
        }
        
    }

    cout<<max1<<endl;
    cout<<max2<<endl;

    return 0;
}