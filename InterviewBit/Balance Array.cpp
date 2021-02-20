int Solution::solve(vector<int> &A) {
    int n = A.size();
    long long evensum=0;
    long long oddsum=0;
    if(n==1)
    {
        return 1;
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            evensum+=A[i];
        }
        else
        {
            oddsum+=A[i];
        }
    }
    long long cevensum=0;
    long long coddsum=0;
    int c=0;
    for(int i=0;i<n;i++)
    {
        long long neweven=0;
        long long newodd=0;
        if(i%2!=0)
        {
            newodd = coddsum + evensum - cevensum;
            neweven = cevensum + oddsum - coddsum - A[i];
            if(newodd == neweven)
            {
                c++;
            }
            coddsum += A[i];
        }
        else
        {
            neweven = cevensum + oddsum - coddsum;
            newodd = coddsum + evensum - cevensum -A[i];
            if(newodd == neweven)
            {
                c++;
            }
            cevensum += A[i];
        }
    }
    return c;
}
