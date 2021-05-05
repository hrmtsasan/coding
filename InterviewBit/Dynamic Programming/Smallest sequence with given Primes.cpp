vector<int> Solution::solve(int A, int B, int C, int D) 
{
        vector<int> ugly(D+1);
        int nma = A;
        int nmb = B;
        int nmc = C;
        int a, b, c;
        ugly[0]=0;
        a=b=c=0;
        int next_ugly_no=0;
        for(int i=1;i<=D;i++)
        {
            next_ugly_no = min(nma,min(nmb,nmc));
            ugly[i] = next_ugly_no;
            if(next_ugly_no == nma)
            {
                a=a+1;
                nma = ugly[a]*A;
            }
            if(next_ugly_no == nmb)
            {
                b=b+1;
                nmb = ugly[b]*B;
            }
            if(next_ugly_no == nmc)
            {
                c=c+1;
                nmc = ugly[c]*C;
            }
        }
        ugly.erase(ugly.begin());
        return ugly; 
}
