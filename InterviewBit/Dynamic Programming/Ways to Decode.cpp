const int MODVAL = 1e9+7;
vector<int> dp;
int solve(string& A, int pos)
{
    if(dp[pos]!=-1)
    {
        return dp[pos];
    }
    if(pos==A.length())
    {
        return 1;
    }
    if(A[pos]=='0')
    {
        return 0;
    }
    int res = solve(A,pos+1)%MODVAL;;
    if(pos+1<A.length() and (A[pos]=='1' or (A[pos]=='2' and A[pos+1]<='6')))
    {
        res = (res + solve(A,pos+2))%MODVAL;
    }
    return dp[pos]=res;
}
int Solution::numDecodings(string A) 
{
    dp.clear();
    dp.resize(A.size()+1,-1);
    return solve(A,0);
}
