class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int n, int p)
    { 
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>n)
            {
                arr[i]=0;
                cnt++;
            }
            else
            {
                arr[i]=arr[i]-1;
            }
        }
        for(int i=0;i<n;i++)
        {
            arr[arr[i]%n]+=n;
        }
        for(int i=0;i<n;i++)
        {
            arr[i]/=n;
            if(i==0)
            {
                arr[i]-=cnt;
            }
        }
    }
};
