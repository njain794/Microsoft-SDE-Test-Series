class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int n)
    {
        int cnt=0;
        int el=-1;
        
        for(int i=0;i<n;i++)
        {
            if(cnt==0)
            {
                el=a[i];
            }
            if(el==a[i])
            {
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==el)
            {
                c++;
            }
        }
        return c>n/2?el:-1;
        // your code here
        
    }
};
