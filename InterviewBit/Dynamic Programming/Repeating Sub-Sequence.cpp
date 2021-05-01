vector<vector<int>> t;
int solve(string s1,string s2, int n,int m)
{
    if(n==0 || m==0)
    {
        return 0;
    }
    if(t[n][m]!=-1)
    {
        return t[n][m];
    }
    if(s1[n-1]==s2[m-1] && (n-1)!=(m-1))
    {
        t[n][m] = 1 + solve(s1,s2,n-1,m-1);
        return t[n][m];
    }
    else
    {
        t[n][m] = max(solve(s1,s2,n,m-1),
                     solve(s1,s2,n-1,m));
        return t[n][m];
    }
}
int Solution::anytwo(string A) 
{
    string s1 = A;
    string s2 = A;
    int n, m;
    n = m = A.size();
    t.clear();
    t.resize(n+1, vector<int> (m+1,-1));
    int ans =  solve(s1,s2,n,m);
    if(ans<2)
    {
        return 0;
    }
    return 1;
    
}
