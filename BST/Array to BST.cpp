vector<int>ans;
    void solve(vector<int> nums,int i,int j)
    {
        if(i>j)
        {
            return;
        }
        int mid=(i+j)/2;
        ans.push_back(nums[mid]);
        solve(nums,i,mid-1);
        solve(nums,mid+1,j);
    }
    
    vector<int> sortedArrayToBST(vector<int>& nums) 
    {
        int n=nums.size();
        solve(nums,0,n-1);
        return ans;
    }
