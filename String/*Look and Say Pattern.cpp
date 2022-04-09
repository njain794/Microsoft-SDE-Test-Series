string lookandsay(int n) 
    {
        if(n==1)
        {
            return "1";
        }
        else if(n==2)
        {
            return "11";
        }
        
        string s="11";
        for(int i=3;i<=n;i++)
        {
            s=s+"&";
            string res="";
            int cnt=1;
            for(int j=1;j<s.size();j++)
            {
                if(s[j]!=s[j-1])
                {
                    res=res+to_string(cnt);
                    res+=s[j-1];
                    cnt=1;
                }
                else{
                    cnt++;
                }
            }
            s=res;
        }
        return s;
    }
