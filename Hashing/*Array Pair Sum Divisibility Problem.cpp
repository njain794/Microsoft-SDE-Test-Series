 class solution{
 public:
    bool canPair(vector<int> nums, int k) 
    {
        int n=nums.size();
        if(n&1)
        {
            return 0;
        }
        
        for(int i=0;i<n;i++)
        {
            nums[i]=nums[i]%k;
        }
        
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(k-nums[i])!=mp.end())
            {
                mp[k-nums[i]]--;
                if(mp[k-nums[i]]<=0)
                {
                    mp.erase(k-nums[i]);
                }
            }
            else if(nums[i]!=0)
            {
                mp[nums[i]]++;
            }
        }
        
        int sum=0;
        for(auto x:mp)
        {
            sum+=x.second;
        }
        if(sum>0)
        {
            return false;
        }
        return true;
    }
};
