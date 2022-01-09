class Solution {
public:
    vector<vector<int>> t;
    int solve(int i, int j, int m, int n)
    {
        if(i==m-1 and j==n-1)
            return 1;
        if(i>m-1 || j>n-1)
            return 0;
        if(t[i][j]!=-1)
            return t[i][j];
        t[i][j] = solve(i+1,j,m,n) + solve(i,j+1,m,n);
        return t[i][j];
    }
    int uniquePaths(int m, int n) 
    {
        t.clear();
        t.resize(m+1, vector<int> (n+1,-1));
        return solve(0,0,m,n);
    }
};