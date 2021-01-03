class Solution 
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        char x;
        
        if (s.length() == 1)
            return false;
            
        //Traverse the expression
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            
        // IF current current character is not opening  bracket, then it  must be closing. So, 
        //in that case stack will be empty. We cannot have ending bracket bfore closing bracket that's 
        //why we are returning false. For eg-"(){}}{"
            
            if(st.empty())    
                return false;       
                
          
            
            
            switch(s[i])
            {
                case ')':
                    // Store the top element 
                    x = st.top();
                    st.pop();
                    if (x=='{' || x=='[')
                        return false;
                    break;
                
                case '}':
                    x = st.top();
                    st.pop();
                    if(x=='(' || x=='[')
                        return false;
                    break;
                    
                case ']':
                    x = st.top();
                    st.pop();
                    if(x=='{' || x=='(')
                        return false;
                    break;
                    
            }
        }
        if(st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};