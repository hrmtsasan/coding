class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> s;
        vector<int> ans;

        s = nums;
        sort(nums.begin(), nums.end());
        int l=0;
        int n = nums.size();
        int r = n-1;
        
        while(l<r)
        {
            if(nums[l]+nums[r]==target)
                break;
                
            if(nums[l]+nums[r] < target)
                l++;
            if(nums[l]+nums[r]>target)
                r--;
        }
        if(nums[l]==nums[r])
        {
            for(int i=0;i<n;i++)
        {
                if(s[i] == nums[l])
                    ans.push_back(i);
        }
            return ans;
            
        }
        
        for(int i=0;i<n;i++)
        {
            if(s[i] == nums[l])
                ans.push_back(i);
            if(s[i] == nums[r] )
                ans.push_back(i);
        }
        return ans;
        
    }
};