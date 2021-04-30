vector<vector<int>> t;
int solve(string A, string B, int n,int m)
{
    if(n==0)
    {
        return m;
    }
    if(m==0)
    {
        return n;
    }
    if(t[n][m]!=-1)
    {
        return t[n][m];
    }
    if(A[n-1]==B[m-1])
    {
        t[n][m] = solve(A,B,n-1,m-1) + 0;
        return t[n][m];
    }
    else
    {
        t[n][m] = 1 + min(solve(A,B,n,m-1), min(solve(A,B,n-1,m), solve(A,B,n-1,m-1)));        
        return t[n][m];
    }
}
int Solution::minDistance(string A, string B) 
{
    int n = A.size();
    int m = B.size();
    t.clear();
    t.resize(n+1, vector<int> (m+1,-1));
    return solve(A,B,n,m);
}
