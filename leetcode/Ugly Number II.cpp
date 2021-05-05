class Solution {
public:
    int nthUglyNumber(int n)
    {
        vector<int> ugly(n);
        ugly[0] = 1;
        int i2, i3, i5;
        i2=i3=i5=0;
        int nm2 = ugly[i2] * 2;
        int nm3 = ugly[i3] * 3;
        int nm5 = ugly[i5] * 5;
        int next_ugly_no=1;
        for(int i=1;i<n;i++)
        {
            next_ugly_no = min(nm2,min(nm3,nm5));
            ugly[i] = next_ugly_no;
            if(next_ugly_no == nm2)
            {
                i2=i2+1;
                nm2 = ugly[i2]*2;
            }
            if(next_ugly_no == nm3)
            {
                i3=i3+1;
                nm3 = ugly[i3]*3;
            }
            if(next_ugly_no == nm5)
            {
                i5=i5+1;
                nm5 = ugly[i5]*5;
            }
        }
        return next_ugly_no; 
        
    }
};