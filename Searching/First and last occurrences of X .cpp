int solve(vector<int>arr,int x,int t)
    {
        int s=0;
        int e=arr.size()-1;
        int ans=-1;
        
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]==x)
            {
                ans=mid;
                if(t==1)
                {
                    e=mid-1;
                }
                else if(t==2)
                {
                    s=mid+1;
                }
            }
            else if(arr[mid]<x)
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
  
    vector<int> firstAndLast(vector<int> &arr, int n, int x) 
    {
        int a=solve(arr,x,1);
        if(a==-1)
        {
            return {-1};
        }
        int b=solve(arr,x,2);
        vector<int>ans;
        ans.assign({a,b});
        return ans;
    }
