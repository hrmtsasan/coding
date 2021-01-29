#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin>>n;
	while(n--)
	{
	    int num;
	    cin>>num;
	    int c=0;
	    while(num>0)
	    {
	        int x = num%10;
	        if(x==4)
	        {
	            c++;
	        }
	        num=num/10;
	    }
	    cout<<c<<endl;
	}
	return 0;
}

