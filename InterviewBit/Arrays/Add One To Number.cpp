vector<int> Solution::plusOne(vector<int> &A) {
    int count = 0;
    int n = A.size();
    for(int i=0;i<n;i++)
    {
        if(A[i]==9)
           count++;
        else
            break;
    }
    if(count==n)
    {
        for(int i=0;i<n;i++)
        {
            A[i]=0;
        }
        A.push_back(1);
        reverse(A.begin(),A.end());
        return A;
    }
    else if(A[n-1]==9)
    {
        int carry=1;
        for(int i=n-1;i>=0 && carry==1;i--)
        {
            if(A[i]==9)
            {
                A[i]=0;
            }
            else
            {
                A[i]++;
                carry=0;
            }
        }
    }
    else
    {
        A[n-1]++;
    }
    reverse(A.begin(),A.end());
    for(int i=n-1;i>=0;i--)
    {
        if(A[i]==0)
        {
            A.pop_back();
        }
        else
        {
            break;
        }
    }
    reverse(A.begin(),A.end());
    return A;
}
