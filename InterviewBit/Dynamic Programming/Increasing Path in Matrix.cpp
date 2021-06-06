int Solution::solve(vector<vector<int> > &A) 
{
    int i=0;
    int j=0;
    int len=1;
    while(i!=A.size()-1 or j!=A[0].size()-1)
    {
        if((A[i+1][j] > A[i][j]) and i<A.size()-1)
        {
            i++;
            len++;
        }
        else if((A[i][j+1] > A[i][j]) and j<A[0].size()-1)
        {
            j++;
            len++;
        }
        else
        {
            return -1;
        }
    }
    return len;
}
