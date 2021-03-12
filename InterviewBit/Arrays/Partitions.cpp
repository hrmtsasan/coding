int Solution::solve(int A, vector<int> &B) 
{
    int sum=0;
    for(int i=0;i<A;i++)
    {
        sum = sum+B[i];
    }
    if(sum%3!=0)
    {
        return 0;
    }
    int req = sum/3;
    int temp = 0;
    vector<int> suff(A,0);
    for(int i=A-1;i>=0;i--)
    {
        temp = temp + B[i];
        if(temp==req)
        {
            suff[i] = 1;
        }
    }
    temp=0;
    int ans=0;
    for(int i=0;i<A;i++)
    {
        temp = temp+B[i];
        if(temp==req)
        {
            for(int j=i+2;j<A;j++)
            {
                if(suff[j]==1)
                {
                    ans++;
                }
            }
        }
    }
    return ans;
}
