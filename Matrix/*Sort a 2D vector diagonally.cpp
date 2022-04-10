void diagonalSort(vector<vector<int> >& mat, int n, int m) 
    {
        vector<int>v;
        for(int i=0;i<m;i++)
        {
            for(int j=0,k=i;j<n && k<m;j++,k++)
            {
                v.push_back(mat[j][k]);
            }
            sort(v.rbegin(),v.rend());
            int s=0;
            for(int j=0,k=i;j<n && k<m;j++,k++)
            {
                if(j==k)
                {
                    continue;
                }
                mat[j][k]=v[s];
                s++;
            }
            v.clear();
        }
        
        for(int i=1;i<n;i++)
        {
            for(int j=i,k=0;j<n && k<m;j++,k++)
            {
                v.push_back(mat[j][k]);
            }
            sort(v.begin(),v.end());
            int s=0;
            for(int j=i,k=0;j<n && k<m;j++,k++)
            {
                if(j==k)
                {
                    continue;
                }
                mat[j][k]=v[s];
                s++;
            }
            v.clear();
        }
    }
