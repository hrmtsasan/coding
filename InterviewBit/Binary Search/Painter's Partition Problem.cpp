int noofPainters(vector<int> &C, int n, int time)
{
    int total = 0;
    int painters = 1;
    for(int i=0;i<n;i++)
    {
        total = total + C[i];
        if(total>time)
        {
            total = C[i];
            painters++;
        }
    }
    return painters;
}
int Solution::paint(int A, int B, vector<int> &C) 
{
    int low = *max_element(C.begin(), C.end());
    int sum=0;
    for(int i=0;i<C.size();i++)
    {
        sum = sum + C[i];
    }
    int high = sum;
    long long int minTime = INT_MAX;
    while(low<=high)
    {
        int mid = (low+high)/2;
        int paintersCount = noofPainters(C,C.size(),mid);
        if(paintersCount>A)
        {
            low = mid+1;
        }
        else
        {
            minTime = mid;
            high = mid-1;
        }
    }
    return (minTime*B)%10000003;
}
