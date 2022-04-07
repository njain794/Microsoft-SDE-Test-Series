int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    unordered_map<int,int>mp;
	    mp[0]=1;
	    int len=0;
	    int sum=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];
	        int rem=sum%k;
	        if(rem<0)
	        {
	            rem+=k;
	        }
	        
	        if(mp.find(rem)!=mp.end())
	        {
	            int clen=i-mp[rem];
	            len=max(len,clen);
	        }
	        else if(mp.find(rem)==mp.end())
	        {
	            mp[rem]=i;
	        }
	    }
	    
	    return len;
	}
