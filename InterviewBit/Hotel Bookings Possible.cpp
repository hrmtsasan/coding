bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) 
{
    vector< pair <int,int>> v;
    for(int i=0;i<arrive.size();i++)
    {
        v.push_back(make_pair(arrive[i],1));
        v.push_back(make_pair(depart[i],0));
    }
    sort(v.begin(),v.end());
    int curr_active=0, max_active=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i].second==1)
        {
            curr_active++;
            if(K<curr_active)
            {
                return false;
            }
        }
        else
        {
            curr_active--;
        }
    }
    return true;
}
