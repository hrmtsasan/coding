class Solution {
public:
    void rotate(vector<vector<int>>& matrix)
    {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=i;j<matrix[0].size();j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        int n = matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                swap(matrix[i][j],matrix[i][n-j-1]);
            }
        }
    }
};