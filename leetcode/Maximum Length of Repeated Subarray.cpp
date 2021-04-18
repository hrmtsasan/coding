class Solution {
public:
    vector<vector<int>> t;
    int fun(vector<int>& nums1, vector<int>& nums2, int n, int m)
    {
        int count=0;
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0 || j==0)
                {
                    t[i][j] = 0;
                    continue;
                }
                if(nums1[i-1]==nums2[j-1])
                {
                    t[i][j] = t[i-1][j-1]+1;
                    count = max(count,t[i][j]);
                }
                else
                {
                    t[i][j] = 0;
                }
            }
        }
        return count;
    }
    int findLength(vector<int>& nums1, vector<int>& nums2) 
    {
        int n = nums1.size();
        int m = nums2.size();
        t.resize(n+1, vector<int> (m+1,0));
        return fun(nums1,nums2,n,m);
        
    }
};