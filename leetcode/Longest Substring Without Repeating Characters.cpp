class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(s.empty())
            return 0;
        int l=0;
        int r=l+1;
        set<int> st;
        int c=1;
        int ans=1;
        st.insert(s[l]);
        while(l<r && r<n)
        {
            
            if(s[l]!=s[r] && st.count(s[r])==0)
            {
                st.insert(s[r]);
                c++;
                r++;
                if(c>ans)
                {
                    ans = c;
                }
            }
            else
            {
                
                l++;
                r = l+1;
                c=1;
                st.clear();
                st.insert(s[l]);
            }
        }
        return ans;
    }
};