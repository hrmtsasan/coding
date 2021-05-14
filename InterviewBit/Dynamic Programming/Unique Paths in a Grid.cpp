vector<vector<int>> t;
int solve(vector<vector<int> > &A, int i, int j)
{
    if(i>A.size()-1 or j>A[0].size()-1 or A[i][j]==1)
        return 0;
    if(i==A.size()-1 && j==A[0].size()-1)
        return 1;
    if(t[i][j]!=-1)
        return t[i][j];
    return t[i][j] = solve(A,i+1,j) + solve(A,i,j+1);
    
}
int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) 
{
    t.clear();
    t.resize(A.size()+1, vector<int> (A[0].size()+1,-1));
    return solve(A,0,0);
}
