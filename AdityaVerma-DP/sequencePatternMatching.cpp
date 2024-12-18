//Is string a is a subsequence of string b.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lcs(string &x, string &y, int n, int m){
        int dp[n+1][m+1];

        for(int i=0; i<n+1; i++){
            for(int j=0; j<m+1; j++){
                if(i == 0 || j == 0) dp[i][j] = 0;
            }
        }

        for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++){
                if(x[i-1] != y[j-1])
                   dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                else
                    dp[i][j] = dp[i-1][j-1] + 1;
            }
        }

        return dp[n][m];
}

int main(){
    string a, b;
    cin >> a >> b;
    int n = a.length(), m = b.length();
    int LCS = lcs(a, b, n, m);

    if(n == LCS){
        cout << "Yes!! string a is a subsequence of string b.";
    }
    else{
        cout << "No!! string a is not a subsequence of string b.";
    }

    return 0;
}