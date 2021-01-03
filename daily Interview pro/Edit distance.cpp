class Solution {
public:
    int min(int x, int y, int z) 
    { 
        if(x<=y && x<=z)
            return x;
        else if(y<=x && y<=z)
            return y;
        else
            return z;
        
        
    } 
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        int dp[m+1][n+1];
        for(int i=0;i<m+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if (i==0)
                    dp[0][j] = j;
                else if(j==0)
                    dp[i][0]=i;
                else if(word1[i-1]==word2[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else
                    dp[i][j] = 1+ min(dp[i][j-1],dp[i-1][j],dp[i-1][j-1]);
            }
        }
        return dp[m][n];
    }
};