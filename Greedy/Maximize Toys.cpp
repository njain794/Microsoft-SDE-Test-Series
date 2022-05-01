int toyCount(int n, int k, vector<int> arr)
    {
        sort(arr.begin(),arr.end());
        
        int cnt=0;
        int i=0;
        while(i<=n-1 and k-arr[i]>=0)
        {
            cnt++;
            k-=arr[i];
            i++;
        }
        return cnt;
    }
