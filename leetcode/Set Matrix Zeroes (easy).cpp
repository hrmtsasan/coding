class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        bool first_row_zero = false;
        for(int j=0;j<col;j++)
        {
            if(matrix[0][j]==0)
                first_row_zero = true;
        }
        for(int i=1;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==0)
                    matrix[0][j] = 0;  // denotes: the whole column should be filled with 0's
            }
        }
        for(int i=1;i<row;i++)
        {
            bool contains_zero = false;
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==0)
                {
                    contains_zero = true;
                    break;
                }
                
            }
            for(int j=0;j<col;j++)
            {
                if(matrix[0][j]==0 || contains_zero==true)
                {
                    matrix[i][j]=0;
                }
                
            }
        }
        if(first_row_zero)
        {
            for(int j=0;j<col;j++)
            {
                matrix[0][j]=0;
            }
        }
    }
};