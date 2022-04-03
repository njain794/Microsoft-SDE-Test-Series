class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> arr)
    {
        vector<int>ans;
        int idx=-1;
        for(int i=n-1;i>0;i--)
        {
            if(arr[i]>arr[i-1])
            {
                idx=i;
                break;
            }
        }
        if(idx==-1)
        {
            reverse(arr.begin(),arr.end());
            return arr;
        }
        int previdx=idx;
        for(int i=idx+1;i<n;i++)
        {
            if(arr[i]<=arr[previdx] and arr[i]>arr[idx-1])
            {
                previdx=i;
            }
        }
        swap(arr[idx-1],arr[previdx]);
        reverse(arr.begin()+idx,arr.end());
        return arr;
    }
};
