class Solution {
public:
    vector<vector<int>> t;
    bool subsetsum(vector<int>& nums, int sum,int n)
    {
        if(n==0 && sum==0)
            return true;
        if(n==0)
           return false;
        if(sum==0)
            return true;
        if(t[n][sum]!=-1)
            return t[n][sum];
        if(nums[n-1]<=sum)
        {
            t[n][sum] = subsetsum(nums,sum-nums[n-1],n-1) || subsetsum(nums,sum,n-1);
            return t[n][sum];
        }
        else
        {
            t[n][sum] = subsetsum(nums,sum,n-1);
            return t[n][sum];
        }
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        sum = accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0)
            return false;
        else
            t.clear();
            t.resize(nums.size() + 1, vector<int> (sum/2 + 1, -1));
            return subsetsum(nums,sum/2,n);
    }
};