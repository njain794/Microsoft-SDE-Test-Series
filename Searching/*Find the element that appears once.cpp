class Solution{
public:	
	int search(int arr[], int n)
	{
	    int s=0;
	    int e=n-1;
	    int ans=0;
	    
	    while(s<=e)
	    {
	        int mid=s+(e-s)/2;
	        if(arr[mid]!=arr[mid+1] and arr[mid]!=arr[mid-1])
	        {
	            ans=mid;
	            break;
	        }
	        if((arr[mid]==arr[mid-1] and mid%2!=0)||(arr[mid]==arr[mid+1] and mid%2==0))
	        {
	            s=mid+1;
	        }
	        else{
	            e=mid-1;
	        }
	    }
	    return arr[ans];
	}
};
