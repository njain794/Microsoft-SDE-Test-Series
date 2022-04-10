void booleanMatrix(vector<vector<int> > &mat)
    {
        unordered_set<int>r;
        unordered_set<int>c;
        
        int n=mat.size();
        int m=mat[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1)
                {
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(r.find(i)!=r.end() or c.find(j)!=c.end())
                {
                    mat[i][j]=1;
                }
            }
        }
    }
