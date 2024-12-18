//minimum number of insertion and deletion for converting 'a' string to 'b'

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

int main() {
    string text1, text2;
    cin >> text1 >> text2;

    int n = text1.length(), m = text2.length();
    
   // string result = lcSubString(text1, text2);
   int LCS = lcs(text1, text2, n, m);

   //cout << LCS;

   int insertion = m - LCS;
   int deletion = n - LCS;
    
    cout << "No of insertion required : " << insertion << endl;
    cout << "No of deletion required : " << deletion << endl;
    
    return 0;
}
