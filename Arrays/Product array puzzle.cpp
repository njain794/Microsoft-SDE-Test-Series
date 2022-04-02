class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) 
    {
       vector<long long int>preans;
       preans.push_back(1);
       long long int l=1;
       for(int i=1;i<n;i++)
       {
           l=l*nums[i-1];
           preans.push_back(l);
       }
       
       vector<long long int>postans;
       postans.push_back(1);
       long long int r=1;
       for(int i=n-2;i>=0;i--)
       {
           r=r*nums[i+1];
           postans.push_back(r);
       }
       reverse(postans.begin(),postans.end());
       
       
       vector<long long int>ans;
       for(int i=0;i<n;i++)
       {
           long long int d=preans[i]*postans[i];
           ans.push_back(d);
       }
       return ans;
        //code here        
    }
};
