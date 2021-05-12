int Solution::maxProfit(const vector<int> &A) 
{
    vector<int> nums = A;
    int n = size(nums);
    if(n<=1)
        return 0;
    int profit[n];
    profit[0] = 0;
    for(int i = 1; i<n; i++)
    {
        if(nums[i]>nums[i-1])
            profit[i] = profit[i-1] + nums[i] - nums[i-1];
        else
            profit[i] = profit[i-1];

    }
    return profit[n-1];

}
