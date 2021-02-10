#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int score1,score2,p1=0,p2=0,win,max=0;
	while(n--)
	{
	    cin>>score1>>score2;
	    p1 = p1+score1;
	    p2=p2+score2;
	    if(abs(p1-p2)>max)
	    {
	        max = abs(p1-p2);
	        if(p1>p2)
	        {
	            win = 1;
	        }
	        else
	        {
	            win = 2;
	        }
	    }
	}
	cout<<win<<" "<<max;
	return 0;

}