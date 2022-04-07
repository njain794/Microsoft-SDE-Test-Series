#define pi pair<int,int>

class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) 
    {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        priority_queue<pi,vector<pi>,greater<pi>>pq;
        for(auto x:mp)
        {
            pq.push({x.second,x.first});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<int>ans;
        while(pq.size()>0)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
