int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int n = A.size();
    int steps=0;
    if(n==1)
    {
        return 0;
    }
    for(int i=0;i<n-1;i++)
    {
        int j = i+1;
        int x = abs(A[i]-A[j]);
        int y = abs(B[i]-B[j]);
        steps = steps+max(x,y); 
        
    }
    return steps;
}
