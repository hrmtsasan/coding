class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sq;
        for(int i=0;i<nums.size();i++)
        {
            sq.push_back(nums[i]*nums[i]);
        }
        sort(sq.begin(),sq.end());
        return sq;
    }
};