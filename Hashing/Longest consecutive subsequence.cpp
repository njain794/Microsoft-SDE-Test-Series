int findLongestConseqSubseq(int arr[], int n)
    {
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]=1;
        }
        for(int i=0;i<n;i++)
        {
            if(mp.find(arr[i]-1)!=mp.end())
            {
                mp[arr[i]]=0;
            }
        }
        int len=0;
        
        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]]==1)
            {
                int num=arr[i];
                int l=1;
                while(mp.find(num+l)!=mp.end())
                {
                    l++;
                }
                len=max(len,l);
            }
        }
        
        return len;
    }
