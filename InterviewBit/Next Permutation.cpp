vector<int> Solution::nextPermutation(vector<int> &A) 
{
    int index=-1;
    int n = A.size();
    for(int i=n-2;i>0;i--)
    {
        if(A[i]<A[i+1])
        {
            index = i;
            break;
        }
    }
    int x,y;
    if(index==-1)
    {
        x=0;
        y=n-1;
        while(x<y)
        {
            swap(A[x],A[y]);
            x++;
            y--;
        }
        return A;
    }
    //just greatest
    int mindiff = INT_MAX, mindiffi = -1;
    for(int i = index+1;i<n;i++)
    {
        if(A[i]>A[index] && A[i]-A[index]<mindiff)
        {
           mindiff = A[i]-A[index];
           mindiffi = i;
        }
    }
    swap(A[index],A[mindiffi]);
    x = index+1;
    y = n-1;
    while(x<y)
        {
            swap(A[x],A[y]);
            x++;
            y--;
        }
    return A;
}
