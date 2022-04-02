class Solution {
  public:
    vector<int> increment(vector<int> arr ,int n) 
    {
        int carry = 1;
        int sum=0;
        vector<int>ans;
        if(arr[n-1]<9)
        {
            arr[n-1]+=1;
            return arr;
        }
        for(int i=n-1;i>=0;i--)
        {
            sum=arr[i]+carry;
            if(sum==10)
            {
                ans.push_back(0);
            }
            else{
                ans.push_back(sum);
                carry =0;
            }
        }
        if(carry==1)
        {
            ans.push_back(1);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
