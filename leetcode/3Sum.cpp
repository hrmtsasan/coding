class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        if(nums.size() < 3)
        {
            return ans;
        }
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i>0 && nums[i] == nums[i-1])
            {
                continue;
            }
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                if(nums[j]+nums[k] == -nums[i])
                {
                    vector<int> g(3);
                    g[0] = nums[i];
                    g[1] = nums[j];
                    g[2] = nums[k];
                    ans.push_back(g);
                    while(nums[j] == g[1] && nums[k] == g[2] && j<k)
                    {
                         j++;
                         k--;
                    }
                   
                }
                else if(nums[j]+nums[k] > -nums[i])
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        return ans;
    }
};