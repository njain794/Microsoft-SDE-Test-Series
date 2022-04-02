class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
        int lmin[n];
        int rmax[n];
        
        lmin[0]=arr[0];
        rmax[n-1]=arr[n-1];
        
        for(int i=1;i<n;i++)
        {
            lmin[i]=min(arr[i],lmin[i-1]);
        }
        
        for(int i=n-2;i>=0;i--)
        {
            rmax[i]=max(rmax[i+1],arr[i]);
        }
        
        int i=0;
        int j=0;
        int maxdiff=INT_MIN;
        
        while(i<n and j<n)
        {
            if(lmin[i]<=rmax[j])
            {
                maxdiff=max(maxdiff,j-i);
                j++;
            }
            else{
                i++;
            }
        }
        return maxdiff;
    }
};
