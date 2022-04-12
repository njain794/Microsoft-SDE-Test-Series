int minimize(vector<int> &a, vector<int> &b, vector<int> &c) 
	{
	    int n=a.size();
	    int m=b.size();
	    int d=c.size();
	    
	    int i=0,j=0,k=0;
	    int ans=INT_MAX;
	    
	    while(i<n and j<m and k<d)
	    {
	        int temp=max(abs(a[i]-b[j]),abs(b[j]-c[k]));
	        int maxans=max(temp,abs(c[k]-a[i]));
	        ans=min(ans,maxans);
	       
	        
	        if(c[k]<=b[j] and c[k]<=a[i])
	        {
	            k++;
	        }
	        else if(b[j]<=a[i] and b[j]<=c[k])
	        {
	            j++;
	        }
	        else if(a[i]<=b[j] and a[i]<=c[k])
	        {
	            i++;
	        }
	    }
	    return ans;
	}
