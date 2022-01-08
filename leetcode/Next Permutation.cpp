class Solution {
public:
    void nextPermutation(vector<int>& nums)
    {
        int n = nums.size();
        if(n==1)
            return;
        int i=1;
        int lastInc = -1;
        while(i<n)      // find the peak of last asc order
        {
            if(nums[i-1]<nums[i])
            {
                lastInc = i;
            }
            i++;
        }
        if(lastInc==-1)   // array is dsc
        {
            for(i=0;i<n/2;i++)
            {
                swap(nums[i],nums[n-1-i]);
            }
            return;
        }
        int index = lastInc;        //special case
        for(i=lastInc;i<n;i++)
        {
            if(nums[i]>nums[lastInc-1] and nums[i]<nums[index])
            {
                index = i;
            }
        }
        swap(nums[lastInc-1],nums[index]);
        sort(nums.begin()+lastInc,nums.end());
    }
};