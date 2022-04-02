class Solution{
public:	
	vector<int> printUnsorted(int arr[], int n) 
	{
	    int s=-1;
	    int e=-1;
	    int minim=INT_MAX;
	    int maxim=INT_MIN;
	    
	    for(int i=0;i<n-1;i++)
	    {
	        if(arr[i]>arr[i+1])
	        {
	            s=i;
	            break;
	        }
	    }
	    
	    for(int j=n-1;j>0;j--)
	    {
	        if(arr[j-1]>arr[j])
	        {
	            e=j;
	            break;
	        }
	    }
	    if(s==-1 && e==-1)
	    {
	        return {0,0};
	    }
	    for(int i=s;i<=e;i++)
	    {
	        minim=min(arr[i],minim);
	        maxim=max(arr[i],maxim);
	    }
	    
	    for(int i=0;i<s;i++)
	    {
	        if(arr[i]>minim)
	        {
	            s=i;
	            break;
	        }
	    }
	    for(int i=e+1;i<n;i++)
	    {
	        if(arr[i]<maxim)
	        {
	            e=i;
	        }
	    }
	    return {s,e};
	}
};
