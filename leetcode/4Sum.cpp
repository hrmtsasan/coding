class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int target2 = target - (nums[i]+nums[j]);
                int front = j+1;
                int back = n-1;
                while(front<back)
                {
                    if(nums[front]+nums[back]>target2)
                        back--;
                    else if(nums[front]+nums[back]<target2)
                        front++;
                    else
                    {
                        vector<int> v(4,0);
                        v[0] = nums[i];
                        v[1] = nums[j];
                        v[2] = nums[front];
                        v[3] = nums[back];
                        res.push_back(v);
                        
                        // processing the duplicates of front
                        while(front<back and nums[front]==v[2])
                            front++;
                        // processing the duplicates of back
                        while(front<back and nums[back]==v[3])
                            back--;
                        
                    }
                }
                // processing the duplicates of j
                while(j+1<n and nums[j+1]==nums[j])
                    j++;
                
            }
            // processing the duplicates of i
            while(i+1<n and nums[i+1]==nums[i])
                    i++;
        }
        return res;
    }
    
};