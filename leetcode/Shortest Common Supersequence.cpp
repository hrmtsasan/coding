class Solution {
public:
    vector<vector<int>> t;
    int fun(string& str1,string& str2,int n,int m)
    {
        if(n==0 || m==0)
            return 0;
        if(t[n][m]!=-1)
            return t[n][m];
        if(str1[n-1]==str2[m-1])
        {
            t[n][m] = fun(str1,str2,n-1,m-1)+1;
            return t[n][m];
        }
        else
        {
            t[n][m] = max(fun(str1,str2,n,m-1), fun(str1,str2,n-1,m));
            return t[n][m];
        }
    }
    string shortestCommonSupersequence(string str1, string str2)
    {
        int n = str1.size();
        int m = str2.size();
        t.resize(n+1, vector<int> (m+1,-1));
        int LCS = fun(str1,str2,n,m);
        int i = n;
        int j = m;
        string s="";
        while(i>0 && j>0)
        {
            if(str1[i-1]==str2[j-1])
            {
                s.push_back(str1[i-1]);
                i--;
                j--;
            }
            else
            {
                if(t[i-1][j] > t[i][j-1])
                {
                    s.push_back(str1[i-1]);
                    i--;
                }
                else
                {
                    s.push_back(str2[j-1]);
                    j--;
                }
            }
        }
        while(i>0)
        {
            s.push_back(str1[i-1]);
            i--;
        }
        while(j>0)
        {
            s.push_back(str2[j-1]);
            j--;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};