string smallestWindow (string s, string p)
    {
        int n=s.size();
        int m=p.size();
        
        if(m>n)
        {
            return "-1";
        }
        
        unordered_map<char,int>mp;
        for(int i=0;i<m;i++)
        {
            mp[p[i]]++;
        }
        
        int cnt=mp.size();
        
        int i=0;
        int j=0;
        int len=n;
        int start=0;
        bool flag=false;
        
        while(j<n)
        {
            if(mp.find(s[j])!=mp.end())
            {
                mp[s[j]]--;
                if(mp[s[j]]==0)
                {
                    cnt--;
                }
            }
            while(cnt==0)
            {
                flag=true;
                if(len>j-i+1)
                {
                    len=j-i+1;
                    start=i;
                }
                
                
                    if(mp.find(s[i])!=mp.end())
                    {
                        mp[s[i]]++;
                        if(mp[s[i]]>0)
                        {
                            cnt++;
                        }
                    }
                    i++;
                
            }
            j++;
        }
        if(flag)
        {
            return s.substr(start,len);
        }
        return "-1";
    }
