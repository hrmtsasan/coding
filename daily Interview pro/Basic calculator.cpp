class Solution {
public:
    int calculate(string s) {
        long int sign = 1;
        long int sum=0;
        stack<long int> st;
        for(int i=0;i<s.length();i++)
        {
            //number
            if(s.at(i)>='0' && s.at(i)<='9')
            {
                long int num=0;
                while(i<s.length() && s.at(i)>='0' && s.at(i)<='9')
                {
                    num = num*10+s.at(i) - '0';
                    i++;
                }
                sum = sum+num*sign;
                i--;
            }
            else if(s.at(i)=='+')
            {
                sign = 1;
            }
             else if(s.at(i)=='-')
            {
                sign = -1;
            }
             else if(s.at(i)=='(')
            {
                st.push(sum);
                st.push(sign);
                sum=0;
                sign=1;
            }
             else if(s.at(i)==')')
            {
                
                sum = st.top()*sum;
                st.pop();
                sum = sum+st.top();
                st.pop();
            }
        }
        return sum;
        
    }
};