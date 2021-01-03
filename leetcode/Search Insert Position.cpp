class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int numsSize = nums.size();
        if(numsSize==0)
        {
            return 0;
        }
        int i;
        for(i=0;i<numsSize;i++)
        {
            if(nums[i] == target)
            {
                return i;
            }
        }
        nums.push_back(target);
        sort(nums.begin(),nums.end());
        auto it = find(nums.begin(), nums.end(), target);
        return it-nums.begin();
    
    }
    
};