vector<int> sortA1ByA2(vector<int> a1, int n, vector<int> a2, int m) 
    {
        vector<int>ans;
        map<int,int>mp;
        for(auto a:a1)
        {
            mp[a]++;
        }
        
        for(auto b:a2)
        {
            if(mp.find(b)!=mp.end())
            {
                int cnt=mp[b];
                while(cnt--)
                {
                    ans.push_back(b);
                }
                mp.erase(b);
            }
        }
        
        for(auto x:mp)
        {
            int cnt=x.second;
            while(cnt--)
            {ans.push_back(x.first);
                
            }
        }
        return ans;
    } 
