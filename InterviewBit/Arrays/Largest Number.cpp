int check(string x, string y)
{
    if(x+y > y+x)
        return 1;
    else
        return 0;
}
string Solution::largestNumber(const vector<int> &A) {
    int x=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==0)
        {
            x++;
        }
    }
    if(x==A.size())
    {
        return "0";
    }
    vector<string> s;
    string ans="";
    for(int i=0;i<A.size();i++)
    {
        s.push_back(to_string(A[i]));
    }
    sort(s.begin(),s.end(),check);
    for(int i=0;i<s.size();i++)
    {
        ans += s[i];
    }
    return ans;
}
