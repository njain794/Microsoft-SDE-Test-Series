vector<int> antiDiagonalPattern(vector<vector<int>> mat) 
    {
        vector<int>ans;
        map<int,vector<int>>mp;
        
        int n=mat.size();
        int m=mat[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mp[i+j].push_back(mat[i][j]);
            }
        }
        
        for(auto x:mp)
        {
            //int d=x.size();
            //cout<<x.first<<"\n";
            for(auto f:x.second)
            {
                ans.push_back(f);
            }
        }
        return ans;
    }
