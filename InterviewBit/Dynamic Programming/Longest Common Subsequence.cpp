vector<vector<int>> t;
int LCS(string& A, string& B, int n, int m)
{
    if(n==0 || m==0)
    {
        return 0;
    }
    if(t[n][m]!=-1)
    {
        return t[n][m];
    }
    if(A[n-1]==B[m-1])
    {
        t[n][m] = 1 + LCS(A,B,n-1,m-1);
        return t[n][m];
    }
    else
    {
        t[n][m] = max(LCS(A,B,n,m-1),
                      LCS(A,B,n-1,m));
        return t[n][m];
    }
}
int Solution::solve(string A, string B)
{
    int n = A.size();
    int m = B.size();
    t.clear();
    t.resize(n+1, vector<int> (m+1,-1));
    return LCS(A,B,n,m);
}
