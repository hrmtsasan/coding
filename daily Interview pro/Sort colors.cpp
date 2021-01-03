class Solution {
public:
    void sortColors(vector<int>& nums)
    {

        int i, cnt0=0,cnt1=0, cnt2=0;
        int n = nums.size();
        
        for(i=0;i<n;i++)
        {
            switch(nums[i])
            {
                case 0:
                    cnt0++;
                    break;
                case 1:
                    cnt1++;
                    break;
                case 2:
                    cnt2++;
                    break;
            }
        }
            
            // Update the array
    
            i=0;
            
            while(cnt0>0)
            {
                nums[i]=0;
                i++;
                cnt0--;
                
            }
             while(cnt1>0)
            {
                nums[i]=1;
                 i++;
                cnt1--;
                
            }
             while(cnt2>0)
            {
                nums[i]=2;
                 i++;
                cnt2--;
                
            }
        }
        
};