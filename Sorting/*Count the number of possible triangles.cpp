int findNumberOfTriangles(int arr[], int n)
    {
        sort(arr,arr+n);
        int cnt=0;
        
        for(int i=n-1;i>=0;i--)
        {
            int j=0;
            int k=i-1;
            while(j<k)
            {
                int sum=arr[k]+arr[j];
                if(sum>arr[i] and max(arr[k],arr[j])<=arr[i])
                {
                    cnt+=(k-j);
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return cnt;
    }
