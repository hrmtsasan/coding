class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> res;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i])==mp.end())
            {
                mp.insert({nums[i],i});
            }
            else
            {
                res.push_back(mp[target-nums[i]]);
                res.push_back(i);
                return res;
            }
        }
        return res;
    }
};