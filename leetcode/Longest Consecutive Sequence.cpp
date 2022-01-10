class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        unordered_set<int> s;
        for(int num : nums)
        {
            s.insert(num);
        }
        int largest_seq = 0;
        for(int num : nums)
        {
            if(!s.count(num-1))
            {
                int curr = num;
                int curr_max = 1;
                
                while(s.count(curr+1))
                {
                    curr++;
                    curr_max++;
                }
                largest_seq = max(largest_seq, curr_max);
                
            }
        }
        return largest_seq;
    }
};