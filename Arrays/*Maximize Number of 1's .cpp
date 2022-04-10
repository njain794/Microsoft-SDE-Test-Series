int findZeroes(int arr[], int n, int m) 
    {
        int s=0;
        int e=0;
        int l=0;
        int cnt=0;
        while(s<=e and e<=n-1)
        {
            
            if(cnt<=m)
            {
                if(arr[e]==0)
                {
                    cnt++;
                }
                if(cnt<=m)
                {
                    l=max(l,e-s+1);
                }
                e++;
            }
            else{
                
                if(arr[s]==0)
                {
                    cnt--;
                }
                s++;
            }
        }
        return l;
    }
