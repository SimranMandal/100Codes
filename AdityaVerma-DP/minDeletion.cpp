//minimum number of deletion in a string to make it palindrome

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

    int longestPalindromeSubseq(string s) {
        string temp;
        int n = s.length();
        int m = s.length();

        temp = s;
        reverse(s.begin(), s.end());

        return lcs(temp, s, n, n);
    }

int main() {
    string text1;
    cin >> text1;

   int lps = longestPalindromeSubseq(text1);
    
    int deletion = text1.length() - lps;

    cout << "Minimum number of deletion is : "<< deletion;
    
    return 0;
}
