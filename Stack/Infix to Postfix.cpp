class Solution {
  public:
  
    int prec(char c)
    {
        switch(c)
        {
            case '^':
            return 3;
            
            case '*':
            return 2;
            
            case '/':
            return 2;
            
            case '+':
            return 1;
            
            case '-':
            return 1;
            
            default:
            return -1;
        }
    }
  
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) 
    {
        string ans;
        stack<char>st;
        int n=s.size();
        
        for(int i=0;i<n;i++)
        {
            if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
            {
                ans.push_back(s[i]);
            }
            else if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                while(!st.empty() and st.top()!='(')
                {
                    ans.push_back(st.top());
                    st.pop();
                }
                if(st.top()=='(')
                {
                    st.pop();
                }
            }
            else{
                while(!st.empty() and prec(s[i])<=prec(st.top()))
                {
                    ans.push_back(st.top());
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
