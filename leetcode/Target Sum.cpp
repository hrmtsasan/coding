class Solution {
public:
    vector<vector<int>> t;
    int countsubsetsum(vector<int>& nums,int S1,int n1)
    {
         if(n1 <= 0){
            if(S1 == 0)
                return 1;
            return 0;
        }
        
        if(t[n1][S1]!=-1)
            return t[n1][S1];
        if(nums[n1-1]<=S1)
        {
            t[n1][S1] = countsubsetsum(nums,S1-nums[n1-1],n1-1) + countsubsetsum(nums,S1,n1-1);
            return t[n1][S1];
        }
        else
        {
            t[n1][S1] = countsubsetsum(nums,S1,n1-1);
            return t[n1][S1];
            
        }
        
        
    }
    int findTargetSumWays(vector<int>& nums, int S) 
    {
        int n1 = nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum < S or ((sum + S) % 2 != 0))
            return 0;
     
        int S1 = (S+sum)/2;
        t.clear();
        t.resize(nums.size() + 1, vector<int> (S1 + 1, -1));
        return countsubsetsum(nums,S1,n1);
    }
};