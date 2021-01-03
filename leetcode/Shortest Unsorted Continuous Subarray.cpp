class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> orig;
        orig = nums;
        sort(nums.begin(), nums.end());
        if (nums == orig)
        {
            return 0;
        }
        int j=0;
        int i=0;
        for(i=0;i<nums.size();i++)
        {
            if (nums[i]!= orig[j])
            {
                break;
            }
            j++;
            
        }
        int start = i;
        int k=0;
        int t=orig.size()-1;
        for(k=nums.size()-1;k>i;k--)
        {
            if (nums[k]!= orig[t])
            {
                break;
            }
            t--;
            
        }
        int end = k;
        return end-start+1;
           
    }
};