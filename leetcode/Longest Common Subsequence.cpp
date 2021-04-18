class Solution {
public:
    vector<vector<int>> t;
    int fun(string& text1, string& text2, int n, int m)
    {
        if(n==0 || m==0)
            return 0;
        if(t[n][m]!=-1)
            return t[n][m];
        if(text1[n-1]==text2[m-1])
        {
            t[n][m] = 1+fun(text1,text2,n-1,m-1);
            return t[n][m];
        }
        else
        {
            t[n][m] = max(fun(text1,text2,n,m-1),
                         fun(text1,text2,n-1,m));
            return t[n][m];
        }
    }
    int longestCommonSubsequence(string text1, string text2) 
    {
        int n = text1.size();
        int m = text2.size();
        t.resize(n+1, vector<int> (m+1,-1));
        return fun(text1,text2,n,m);
        
    }
};