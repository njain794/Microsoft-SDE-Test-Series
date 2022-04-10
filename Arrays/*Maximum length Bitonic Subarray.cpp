int bitonic(vector<int> arr, int n) 
	{
	    vector<int>left;
	    vector<int>right;
	    
	    left.push_back(0);
	    //cout<<"0 ";
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i-1]<=arr[i])
	        {
	            //int g=left[i-1]+1;
	            left.push_back(left[i-1]+1);
	        }
	        else{
	            left.push_back(0);
	        }
	        //cout<<left[i]<<" ";
	    }
	    //cout<<"\n";
	    right.push_back(0);
	    int k=1;
	    for(int i=n-2;i>=0;i--)
	    {
	        if(arr[i+1]<=arr[i])
	        {
	            //int g=right[i+1]+1;
	            //cout<<right[i+1]<<"\n";
	            right.push_back(right[k-1]+1);
	        }
	        else{
	            right.push_back(0);
	        }
	        k++;
	        //cout<<right[i]<<" ";
	    }
	    //cout<<"\n";
	    reverse(right.begin(),right.end());
	    /*for(auto x:right)
	    {
	        cout<<x<<" ";
	    }
	    cout<<"\n";*/

	    int l=0;
	    for(int i=0;i<n;i++)
	    {
	        l=max(l,left[i]+right[i]+1);
	    }
	    return l;
	}
