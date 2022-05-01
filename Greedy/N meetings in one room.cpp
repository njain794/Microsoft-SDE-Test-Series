int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({end[i],start[i]});
        }
        sort(v.begin(),v.end());
        
        int cnt=1;
        //int j=0;
        int s=v[0].second;
        int e=v[0].first;
        for(int i=1;i<n;i++)
        {
            if(e<v[i].second)
            {
                cnt++;
                e=v[i].first;
            }
        }
        return cnt;
    }
