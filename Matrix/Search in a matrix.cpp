int matSearch (int n, int m, int mat[][m], int x)
{
    int l=0;
    int r=m-1;
    while(l<n && r>=0)
    {
        if(mat[l][r]==x)
        {
            return 1;
        }
        else if(mat[l][r]<x)
        {
            l++;
        }
        else{
            r--;
        }
    }
    return 0;
}
