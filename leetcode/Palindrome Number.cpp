class Solution {
public:
    bool isPalindrome(int x) {
        int org=0;
        org = x;
        if (x<0)
        {
            return false;
        }
        long int rev = 0;
        while(x>0)
        {
            int n;
            n = x%10;
            rev = rev*10 + n;
            x = x/10;
        }
        if (rev == org)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};