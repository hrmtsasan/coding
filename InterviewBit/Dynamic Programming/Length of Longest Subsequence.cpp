int Solution::longestSubsequenceLength(const vector<int> &A)
{
    if(A.size()<=1)
    {
        return A.size();
    }
    vector<int> lis(A.size(),1);         // left to right
    vector<int> lds(A.size(),1);         // right to left;
    vector<int> ans(A.size(),0);
    
    
    for(int i=1;i<A.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(A[j] < A[i] and lis[i] < lis[j]+1)
            {
                lis[i]++;
            }
        }
    }
    for(int i=A.size()-2;i>=0;i--)
    {
        for(int j=A.size()-1;j>i;j--)
        {
            if(A[j] < A[i] and lds[i] < lds[j]+1)
            {
                lds[i]++;
            }
        }
    }
    int max = INT_MIN;
    for(int i=0;i<ans.size();i++)
    {
        ans[i] = lis[i] + lds[i]-1;
    }
    return *max_element(ans.begin(),ans.end());
}
