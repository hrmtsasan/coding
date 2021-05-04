class Solution {
public:
    vector<vector<int>> t;
int solve(vector<int>& a, vector<int>& b, int n, int m)
{
    if(n==0 || m==0)
    {
        return 0;
    }
    if(t[n][m]!=-1)
    {
        return t[n][m];
    }
    if(a[n-1]==b[m-1])
    {
        t[n][m] = 1 + solve(a,b,n-1,m-1);
        return t[n][m];
    }
    else
    {
        t[n][m] = max(solve(a,b,n,m-1),
                      solve(a,b,n-1,m));
        return t[n][m];
        
    }
}
int lengthOfLIS(vector<int> &A) 
{
    vector<int> a = A;
    
    vector<int> b = A;
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(),b.end()),b.end());
    
    int n = a.size();
    int m = b.size();
    
    t.clear();
    t.resize(n+1, vector<int> (m+1,-1));
    return solve(a,b,n,m);
}
};