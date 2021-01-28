#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    while(n>0)
	    {
	        int x;
	        x = n%10;
	        sum = sum+x;
	        n = n/10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
