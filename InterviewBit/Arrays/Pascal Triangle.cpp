vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> ans;
    for(int i=0;i<A;i++)
    {
        vector<int> req;
        for(int j=0;j<=i;j++)
        {
            if(j==0 || j==i)
            {
                req.push_back(1);
            }
            else
            {
                req.push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
        }
        ans.push_back(req);
    }
    return ans;
}
