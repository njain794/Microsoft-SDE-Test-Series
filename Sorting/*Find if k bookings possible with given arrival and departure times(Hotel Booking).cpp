bool areBookingsPossible(int k, vector<int>&arr, vector<int>&dep)
	{
	    int n=arr.size();
	    vector<pair<int,int>>ans;
	    
	    for(int i=0;i<n;i++)
	    {
	        ans.push_back({arr[i],1});
	        ans.push_back({dep[i],0});
	    }
	    sort(ans.begin(),ans.end());
	    
	    int maxcnt=0;
	    int cnt=0;
	    
	    for(int i=0;i<ans.size();i++)
	    {
	        if(ans[i].second==1)
	        {
	            cnt++;
	            maxcnt=max(cnt,maxcnt);
	            
	        }
	        else{
	            cnt--;
	        }
	    }
	    return k>=maxcnt;
    }
