vector<int> Solution::wave(vector<int> &A) 
{
    sort(A.begin(),A.end());
    if(A.size()==1)
    {
        return A;
    }
    for(int i=0;i<A.size()-1;i=i+2)
    {
        swap(A[i],A[i+1]);
    }
    return A;
}
