#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;

// Function to find the longest common subsequence
string lcSubString(string text1, string text2) {
    int m = text1.length();
    int n = text2.length();
    
    // Create a 2D vector to store subsequence
    vector<vector<string>> t(m + 1, vector<string>(n + 1, ""));
    
    // Build the table in a bottom-up manner
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (text1[i - 1] == text2[j - 1]) {
                t[i][j] = t[i - 1][j - 1] + text1[i - 1];
            } else {
                if (t[i - 1][j].length() > t[i][j - 1].length()) {
                    t[i][j] = t[i - 1][j];
                } else {
                    t[i][j] = t[i][j - 1];
                }
            }
        }
    }

    return t[m][n];  // Return the longest common subsequence
}

string LCS(string x, string y, int n, int m){
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

    int i=n, j=m;
    string s = "";

    while(i > 0 || j > 0){
        if(x[i-1] == y[j-1]){
            s.push_back(x[i-1]);
            i--;
            j--;
        }
        else{
            if(dp[i-1][j] > dp[i][j-1]) i--;
            else j--;
        }
    }

    reverse(s.begin(), s.end());

    return s;
}

// Main functioning
int main() {
    // string text1 = "acbcf";
    // string text2 = "abxghcef";
    string text1, text2;
    cin >> text1 >> text2;

    int n = text1.length(), m = text2.length();
    
   // string result = lcSubString(text1, text2);
   string result = LCS(text1, text2, n, m);
    
    cout << "Longest Common Sequence: " << result << endl;
    
    return 0;
}
