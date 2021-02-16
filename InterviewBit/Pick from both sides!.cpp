int Solution::solve(vector<int> &A, int B) {
    int max=0;
    for(int i=0;i<B;i++)
    {
        max = max+A[i];
    }
    int sum = max;
    for(int i=1;i<B+1;i++)
    {
        sum = sum - A[B-i] + A[A.size()-i];
        if(max<sum)
        {
            max=sum;
        }
    }
    return max;
}
