#include <bits/stdc++.h> 
using namespace std; 

int main() {
	int n;
	cin>>n;
	while(n--)
	{
	    vector<int> v;
	    for(int i=0;i<3;i++)
	    {
	        int e;
	        cin>>e;
	        v.push_back(e);
	    }
	    sort(v.begin(),v.end());
	    cout<<v[1]<<endl;
	}
	return 0;
}
