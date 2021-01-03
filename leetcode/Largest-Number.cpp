class Solution {
public:
    static int myCompare(string x, string y)
    {
        string a = x.append(y);
        string b = y.append(x);
        if(a+b > b+a)
        {
            return 1;
        }
        else
        {
            return 0;
        }
            
        
    }
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        string ans="";
        for(int i=0;i<nums.size();i++)
        {
            v.push_back(to_string(nums[i]));
        }
        if (v.size() == count(v.begin(), v.end(), "0"))
        {
            return "0";
        }
        sort(v.begin(),v.end(),myCompare);
         for(int i=0;i<v.size();i++)
        {
            ans = ans+v[i];
        }
        return ans;
    }
};