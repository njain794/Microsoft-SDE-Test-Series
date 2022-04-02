class Solution{
public:

	void rearrange(int arr[], int n) 
	{
	    vector<int>pos;
	    vector<int>neg;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<0)
	        {
	            neg.push_back(arr[i]);
	        }
	        else
	        {
	            pos.push_back(arr[i]);
	        }
	    }
	    
	    int k=0;
	    int a=pos.size();
	    int m=neg.size();
	    
	    for(int i=0;i<n;i++)
	    {
	        if(k<a and k<m)
	        {
	            arr[i]=pos[k];
	            i++;
	            arr[i]=neg[k];
	        }
	        else if(k<a)
	        {
	            arr[i]=pos[k];
	        }
	        else if(k<m)
	        {
	            arr[i]=neg[k];
	        }
	        k++;
	    }
	}
};
