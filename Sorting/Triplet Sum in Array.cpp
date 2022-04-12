bool find3Numbers(int arr[], int n, int x)
    {
        sort(arr,arr+n);
        
        for(int i=0;i<n-1;i++)
        {
            int s=i+1;
            int e=n-1;
            while(s<e)
            {
                int sum=arr[i]+arr[s]+arr[e];
                if(sum==x)
                {
                    return true;
                }
                else if(sum<x)
                {
                    s++;
                }
                else{
                    e--;
                }
            }
        }
        return false;
    }
