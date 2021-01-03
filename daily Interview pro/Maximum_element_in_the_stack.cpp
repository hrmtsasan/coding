#include <cmath>
#include <bits/stdc++.h> 
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    stack <int> s;
    stack <int> maxs;
    int n;
    cin>>n;
    int max;
    for(int i=0;i<n;i++)
    {
        int option;
        cin>>option;
        switch (option) 
        {
            case 1:
            int value;
            cin>>value;
            max = value;
            if(!maxs.empty() && max<maxs.top())
            {
                max = maxs.top();
            }
            s.push(value);
            maxs.push(max);
            break;

            case 2:
            s.pop();
            maxs.pop();
            break;

            case 3:
            cout<<maxs.top()<<endl;
            break;



        }
    }  
    return 0;
}
