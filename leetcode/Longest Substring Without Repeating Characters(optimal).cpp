class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int len = 0;
        int r=0,l=0;
        vector<int> mp(256,-1);
        while(r<n)
        {
            if(mp[s[r]]!=-1)
                l = max(mp[s[r]]+1, l);
            mp[s[r]] = r;
            len = max(len, r-l+1);
            r++;
        }
        return len;
    }
};