class Solution {
public:
    bool isUgly(int n) 
    {
        if(n<=0)
        {
            return false;
        }
        while(n!=1)
        {
            if(n%2==0)
            {
                n = n/2;
                cout<<n<<" ";
            }
            else if(n%3==0)
            {
                n = n/3;
                cout<<n<<" ";
            }
            else if(n%5==0)
            {
                n = n/5;
                cout<<n<<" ";
            }
            else
            {
                return false;
            }
            
        }
        return true;
    }
};