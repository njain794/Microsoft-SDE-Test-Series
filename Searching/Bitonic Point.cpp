int findMaximum(int arr[], int n) 
	{
	    int s=0;
	    int e=n-1;
	    int ans=0;
	    
	    while(s<=e)
	    {
	        int mid=s+(e-s)/2;
	        if(mid==0 and arr[mid]>arr[mid+1])
	        {
	            return arr[mid];
	        }
	        if(mid==n-1 and arr[mid]>arr[mid-1])
	        {
	            return arr[mid];
	        }
	        if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1])
	        {
	            return arr[mid];
	        }
	        
	        if(arr[mid]>arr[mid-1] and arr[mid]<arr[mid+1])
	        {
	            s=mid+1;
	        }
	        else if(arr[mid]>arr[mid+1] and arr[mid]<arr[mid-1]){
	            e=mid-1;
	        }
	    }
	    return ans;
	}
