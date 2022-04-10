vector<vector<int>> generateSpiralMatrix(int n)
    {
        vector<vector<int>> ans(n,vector<int>(n));
        int l=0;
        int r=n-1;
        int u=0;
        int d=n-1;
        int cnt=1;
        int dir=0;
        while(l<=r and u<=d)
        {
            if(dir==0)
            {
                for(int i=l;i<=r;i++)
                {
                    ans[u][i]=cnt;
                    cnt++;
                }
                u++;
            }
            else if(dir==1)
            {
                for(int i=u;i<=d;i++)
                {
                    ans[i][r]=cnt;
                    cnt++;
                }
                r--;
            }
            else if(dir==2)
            {
                for(int i=r;i>=l;i--)
                {
                    ans[d][i]=cnt;
                    cnt++;
                }
                d--;
            }
            else if(dir==3)
            {
                for(int i=d;i>=u;i--)
                {
                    ans[i][l]=cnt;
                    cnt++;
                }
                l++;
            }
            //cout<<dir<<"\n";
            dir=(dir+1)%4;
        }
        return ans;
    }
