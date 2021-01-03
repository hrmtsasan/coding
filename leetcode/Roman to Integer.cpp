class Solution {
public:
    int romanToInt(string s) {
        int res=0;
        int i;
        for(i=0;i<s.size();i++)
        {
            if((s[i+1] == 'V' || s[i+1] == 'X') && s[i] == 'I')
            {
                if(s[i+1] == 'V')
                {
                    res = res + 4;
                }
                if(s[i+1] == 'X')
                {
                    res = res + 9;
                }
                i=i+1;
                continue;
            }
            if((s[i+1] == 'L' || s[i+1] == 'C') && s[i] == 'X')
            {
                if(s[i+1] == 'L')
                {
                    res = res +  40;
                }
                if(s[i+1] == 'C')
                {
                    res = res +  90;
                }
                i=i+1;
                continue;
            }
            if((s[i+1] == 'D' || s[i+1] == 'M') && s[i] == 'C')
            {
                if(s[i+1] == 'D')
                {
                    res = res + 400;
                }
                if(s[i+1] == 'M')
                {
                    res = res + 900;
                }
                i=i+1;
                continue;
            }
            switch(s[i])
            {
                case 'I':
                    res = res+1;
                    break;
                case 'V':
                    res = res+5;
                    break;
                case 'X':
                    res = res+10;
                    break;
                case 'L':
                    res = res+50;
                    break;
                case 'C':
                    res = res+100;
                    break;
                case 'D':
                    res = res+500;
                    break;
                case 'M':
                    res = res+1000;
                    break;
                    
            }
        }
        return res;
        
    }
};