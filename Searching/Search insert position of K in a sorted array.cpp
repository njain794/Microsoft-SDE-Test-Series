int searchInsertK(vector<int>arr, int n, int k)
    {
        int ans=0;
        int s=0;
        int e=n-1;
        
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]==k)
            {
                return mid;
            }
            else if(arr[mid]<k)
            {
                //ans=mid;
                s=mid+1;
                ans=s;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
