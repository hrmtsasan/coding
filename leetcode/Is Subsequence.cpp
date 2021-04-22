class Solution {
public:
    vector<vector<int>> dp;
    int LCS(string& s, string& t, int n, int m)
    {
        if(n==0 || m==0)
            return 0;
        if(dp[n][m]!=-1)
            return dp[n][m];
        if(s[n-1]==t[m-1])
        {
            dp[n][m] = LCS(s,t,n-1,m-1)+1;
            return dp[n][m];
        }
        else
        {
            dp[n][m] = max(LCS(s,t,n,m-1),
                          LCS(s,t,n-1,m));
            return dp[n][m];
        }
    }
    bool isSubsequence(string s, string t) 
    {
        int n = s.size();
        int m = t.size();
        dp.resize(n+1, vector<int> (m+1,-1));
        int lcs = LCS(s,t,n,m);
        if(n==lcs)
            return true;
        else
            return false;
        
    }
};