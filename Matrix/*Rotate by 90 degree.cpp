void rotate(vector<vector<int> >& mat)
{
    int n=mat.size();
    int m=mat[0].size();
    int g=0;
    for(int i=0;i<n;i++)
    {
        for(int j=g;j<m;j++)
        {
            //cout<<mat[i][j]<<" "<<mat[j][i]<<"\n";
            swap(mat[i][j],mat[j][i]);
        }
        g++;
    }
    
    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }*/
    
    for(int i=0;i<n/2;i++)
    {
        int d=n-1-i;
        for(int j=0;j<m;j++)
        {
            swap(mat[i][j],mat[d][j]);
        }
    }
}
