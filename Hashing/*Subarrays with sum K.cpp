class Solution{
    public:
    int findSubArraySum(int arr[], int n, int k)
    {
        unordered_map<int,int>mp;
        mp[0]=1;
        int cnt=0;
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            cnt+=mp[sum-k];
            mp[sum]++;
        }
        return cnt;
    }
};
