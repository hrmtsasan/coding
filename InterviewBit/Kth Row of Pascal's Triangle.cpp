vector<int> Solution::getRow(int A) {
    vector<int> ans;
    // nC0 = 1
    ans.push_back(1);
    int prev=1;
    for(int i=1;i<=A;i++)
    {
        // nCr = (nCr-1 * (n - r + 1))/r
        int curr = prev*(A-i+1)/i;
        ans.push_back(curr);
        prev = curr;
        
    }
    return ans;
}
