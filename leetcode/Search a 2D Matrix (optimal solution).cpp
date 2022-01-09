class Solution {
public:
    bool solve(vector<vector<int>>& matrix, int row, int target)
    {
        int left = 0;
        int right = matrix[0].size()-1;
        while(left<=right)
        {
            int mid = (left+right)/2;
            if(matrix[row][mid]==target)
                return true;
            else if(matrix[row][mid]>target)
            {
                right = mid-1;
            }
            else
            {
                left = mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int top=0;
        int down = matrix.size()-1;
        int col = matrix[0].size()-1;
        // Using binary search on column to find the row that has target.
        while(top<=down)
        {
            int mid = (top+down)/2;
            if(matrix[mid][0]<=target and matrix[mid][col]>=target)
            {
                return solve(matrix,mid,target);
            }
            else if(matrix[mid][0]>target)
            {
                down = mid-1;
            }
            else
            {
                top = mid+1;
            }
        }
        
        return false;
    }
};