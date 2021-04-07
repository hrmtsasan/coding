vector<int> subsetsum(vector<int> &A,int range)
{
    vector<int> v;
    int n = A.size();
    int t[n+1][range+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<range+1;j++)
        {
            if(i==0)
               t[i][j] = false;
            if(j==0)
               t[i][j] = true;
        }
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<range+1;j++)
        {
            if(A[i-1]<=j)
               t[i][j] = t[i-1][j-A[i-1]] || t[i-1][j];
            else
               t[i][j] = t[i-1][j];
        }
    }
    for(int j=0;j<=range/2;j++)
    {
        if(t[n][j]==true)
           v.push_back(j);
        
    }
    return v;
    
}
int Solution::solve(vector<int> &A) 
{
    int n = A.size();
    int range = 0;
    for(int i=0;i<A.size();i++)
    {
        range = range+A[i];
    }
    vector<int> c = subsetsum(A,range);
    int mn = INT_MAX;
    for(int i=0;i<c.size();i++)
    {
        mn = min(mn,range-2*c[i]);
    }
    return mn;
}
