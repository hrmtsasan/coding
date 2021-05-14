class Solution {
public:
    vector<vector<int>> dp;
    int solve(vector<vector<int>>& triangle, int i,int j)
    {
        if(i==triangle.size()-1)
            return dp[i][j] = triangle[i][j];
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        return dp[i][j] = triangle[i][j] + min(solve(triangle, i+1, j), solve(triangle, i+1, j+1));
    }
    int minimumTotal(vector<vector<int>>& triangle)
    {
        dp.assign(triangle.size(), vector<int> (triangle[triangle.size() - 1].size(), -1));
        return solve(triangle,0,0);
        
    }
};