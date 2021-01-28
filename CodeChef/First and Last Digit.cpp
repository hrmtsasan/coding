#include <iostream>
using namespace std;

int main() {
    float n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        int c=0;
        int org=num;
        while(num>0)
        {
            num = num/10;
            c++;
        }
        int last = org%10;
        while(c>1)
        {
            org = org/10;
            c--;
        }
        int first = org;
        cout<<first+last<<endl;
    }
	return 0;
}
