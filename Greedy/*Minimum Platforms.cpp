int findPlatform(int arr[], int dep[], int n)
    {
        sort(arr,arr+n);
        sort(dep,dep+n);
        
        int maxp=1;
        int currp=1;
        int i=1,j=0;
        
        while(i<n and j<n)
        {
            if(arr[i]<=dep[j])
            {
                currp++;
                i++;
            }
            else{
                currp--;
                j++;
            }
            maxp=max(currp,maxp);

        }
        return maxp;
    }
