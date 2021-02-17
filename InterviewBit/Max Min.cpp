int Solution::solve(vector<int> &A) {
    for(int i=0;i<A.size();i++)
    {
        sort(A.begin(),A.end());
        return A[0]+A[A.size()-1];
    }
}
