#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int shortestSuperseq(string &x, string &y, int n, int m){
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
               dp[i][j] = 1 + dp[i-1][j-1];
        }
    }

    return (n + m) - dp[n][m];
}

int main(){
    string text1, text2;
    cin >> text1 >> text2; //aggtab  gxtxayb

    int n = text1.length(), m = text2.length();

    int result = shortestSuperseq(text1, text2, n, m);

    cout << "Shortest Common SuperSequence: " << result << endl;

    return 0;
}
