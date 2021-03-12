vector<int> Solution::solve(vector<int> &A) {
    int max_from_right=0;
    int n = A.size();
    vector<int> leaders;
    for(int i=n-1;i>=0;i--)
    {
        if(A[i]>max_from_right)
        {
            max_from_right = A[i];
            leaders.push_back(A[i]);
        }
    }
    return leaders;
}
