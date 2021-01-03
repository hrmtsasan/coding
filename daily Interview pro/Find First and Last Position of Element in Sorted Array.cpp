class Solution {
public:
    int start(vector <int> nums, int n, int target) 
    {
        int low = 0, high=n-1,res=-1;
        while(low<= high)
        {
            int mid = (low+high)/2;
            
            if (nums[mid] >target)
                high = mid-1;
            
            else if (nums[mid]<target)
                low = mid+1;
            
            else
            {
                res = mid;
                high = mid-1;
            }
        }
        return res;
    }
    
    int end(vector <int> nums, int n, int target)
    {
        int low = 0, high=n-1,res=-1;
         while(low<= high)
        {
            int mid = (low+high)/2;
            
            if (nums[mid] >target)
                high = mid-1;
            
            else if (nums[mid]<target)
                low = mid+1;
            
            else
            {
                res= mid;
                low = mid+1;
            }
        }
       return res;
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;
        int n = nums.size();
        int low = 0, high=n-1,res=-1;
        
        int s = start(nums,n,target);
        int e = end(nums,n,target);
        
    
       
        ans.push_back(s);
        ans.push_back(e);
        return ans;
    }
};