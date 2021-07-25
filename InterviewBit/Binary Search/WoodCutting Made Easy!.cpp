int Solution::solve(vector<int> &A, int B)
{
    int mn = 0;
    int mx = *max_element(A.begin(), A.end());
    int ans=0;
    while(mn<=mx)
    {
        int mid = (mn+mx)/2;
        long wood=0;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]-mid>0)
            {
                wood = wood + A[i] - mid;
            }
        }
        if(wood>=B)
        {
            mn = mid + 1;
            ans = max(ans,mid);
        }
        else
        {
            mx = mid-1;
        }
    }
    return ans;
}
