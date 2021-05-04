vector<vector<int>> t;
int solve(string& A, string& B, int n, int m)
{
    if(t[n][m]!=-1)
    {
        return t[n][m];
    }
    if(m<=0)
    {
        return 1;
    }
    if(n<=0)
    {
        return 0;
    }
    
    if(A[n-1] == B[m-1])
    {
        t[n][m] = solve(A,B,n-1,m-1) + solve(A,B,n-1,m);
        return t[n][m];
    }
    return t[n][m] = solve(A,B,n-1,m);
    
}
int Solution::numDistinct(string A, string B) 
{
    int n = A.size();
    int m = B.size();
    if(A==B)
    {
        return 1; 
    }
    t.clear();
    t.resize(n+1, vector<int> (m+1,-1));
    return solve(A,B,n,m);
}
