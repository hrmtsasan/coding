class Solution {
public:
    vector<vector<int>> t;
    int LCS(string& s1,string& s2,int n,int m)
    {
        if(n==0 || m==0)
            return 0;
        if(t[n][m]!=-1)
            return t[n][m];
        if(s1[n-1]==s2[m-1])
        {
            t[n][m] = LCS(s1,s2,n-1,m-1) + 1;
            return t[n][m];
        }
        else
        {
            t[n][m] = max(LCS(s1,s2,n,m-1), LCS(s1,s2,n-1,m));
            return t[n][m];
        }
    }
    int longestPalindromeSubseq(string s)
    {
        string s1 = s;
        reverse(s.begin(), s.end());
        string s2 = s;
        int n = s1.size();
        int m = n;
        t.resize(n+1, vector<int> (m+1,-1));
        return LCS(s1,s2,n,m);
        
    }
};