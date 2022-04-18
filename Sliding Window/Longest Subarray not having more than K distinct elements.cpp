vector<int>longestSubarray(vector<int>&nums , int k)
	{
	    vector<int>ans;
	    unordered_map<int,int>mp;
	    int n=nums.size();
	    int len=INT_MIN;
	    int s,e;
	    
	    int i=0,j=0;
	    while(j<n)
	    {
	        mp[nums[j]]++;
	        if(mp.size()<=k)
	        {
	            if(j-i+1>=len)
	            {
	                len=j-i+1;
	                s=i;
	                e=j;
	            }
	        }
	        else if(mp.size()>k)
	        {
	            while(mp.size()>k and i<j)
	            {
	                mp[nums[i]]--;
	                if(mp[nums[i]]==0)
	                {
	                    mp.erase(nums[i]);
	                }
	                i++;
	            }
	            if(mp.size()<=k)
    	        {
    	            if(j-i+1>=len)
    	            {
    	                len=j-i+1;
    	                s=i;
    	                e=j;
    	            }
    	        }
	        }
	        j++;
	    }
	    ans.assign(nums.begin()+s,nums.begin()+e+1);
	    return ans;
	}
