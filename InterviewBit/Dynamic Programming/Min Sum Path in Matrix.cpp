vector<vector<int>> t;
int solve(vector<vector<int> > &A, int i, int j)
{
    if(i>A.size()-1 or j>A[0].size()-1)
        return INT_MAX;
    if(i==A.size()-1 && j==A[0].size()-1)
        return A[i][j];
    if(t[i][j]!=-1)
        return t[i][j];
    
    return t[i][j] = A[i][j] + min(solve(A,i+1,j),
                               solve(A,i,j+1));
}
int Solution::minPathSum(vector<vector<int> > &A) 
{
    int M = A.size();
    int N = A[0].size();
    t.clear();
    t.resize(M+1, vector<int> (N+1,-1));
    return solve(A,0,0);
}
