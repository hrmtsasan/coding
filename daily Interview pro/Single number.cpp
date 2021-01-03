class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int n = nums.size();
        int i;
        sort(nums.begin(),nums.end());
        if (n==1)
            return nums[0];
        for( i=0;i<n;i=i+2)
        {
            if(nums[i]!=nums[i+1])
                break;
        }
        return nums[i];
    }
};