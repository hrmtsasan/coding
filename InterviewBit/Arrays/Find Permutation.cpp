vector<int> Solution::findPerm(const string A, int B) {
    int min = 1, max = B, n = A.length();
    vector<int> res;
    for(int i=0;i<n;i++){
        if(A[i]=='D') {
            res.push_back(max--);
        }
        else res.push_back(min++);
    }
    res.push_back(max);
    return res;
}
