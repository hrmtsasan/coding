vector<int> Solution::subUnsort(vector<int> &A) 
{
    vector<int> org;
    vector<int> ans;
    org = A;
    sort(A.begin(),A.end());
    if(org == A)
    {
        ans.push_back(-1);
        return ans;
    }
    for(int i=0;i<A.size();i++)
    {
        if(A[i]!=org[i])
        {
            ans.push_back(i);
            break;
        }
    }
    for(int i=A.size()-1;i>=0;i--)
    {
        if(A[i]!=org[i])
        {
            ans.push_back(i);
            break;
        }
    }
    return ans;
}
