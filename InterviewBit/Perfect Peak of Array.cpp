int Solution::perfectPeak(vector<int> &A) 
{
    int n = A.size();
    vector<int> suff(n,0);
    vector<int> pref(n,0);
    
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(max<=A[i])
        {
            max = A[i];
            pref[i]=A[i];
        }
        else
        {
            pref[i] = max;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(min>=A[i])
        {
            min = A[i];
            suff[i] = A[i];
        }
        else
        {
            suff[i] = min;
        }
    }
    int c=0;
    for(int i=1;i<n-1;i++)
    {
        if(A[i]<=suff[i] && A[i]>=pref[i] && count(A.begin(), A.end(),A[i])==1)
        {
            c++;
        }
    }
    if(c==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
