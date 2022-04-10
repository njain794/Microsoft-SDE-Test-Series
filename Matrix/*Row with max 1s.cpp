int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int r=0;
	    int c=0;
	    int ans=-1;
	    
	    while(c<m)
	    {
	        if(arr[r][c]==1)
	        {
	            ans=0;
	            break;
	        }
	        c++;
	    }
	    r++;
	    c--;
	    while(r<n and c>=0)
	    {
	        if(arr[r][c]==0)
	        {
	            r++;
	        }
	        else if(arr[r][c]==1)
	        {
	            ans=r;
	            c--;
	        }
	    }
	    
	    return ans;
	    
	}
