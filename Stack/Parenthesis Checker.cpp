class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        stack<char>st;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==')' and !st.empty() and st.top()=='(')
            {
                st.pop();
            }
            else if(s[i]=='}' and !st.empty() and st.top()=='{')
            {
                st.pop();
            }
            else if(s[i]==']' and !st.empty() and st.top()=='[')
            {
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        return st.size()==0;
    }

};
