class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        int ans=0;
        vector<int>pol;
        vector<int>th;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]=='P')
            {
                pol.push_back(i);
            }
            else if(arr[i]=='T')
            {
                th.push_back(i);
            }
        }
        
        int l=0;
        int r=0;
        while(l<pol.size() and r<th.size())
        {
            if(abs(pol[l]-th[r])<=k)
            {
                ans++;
                l++;
                r++;
            }
            else if(th[r]<pol[l])
            {
                r++;
            }
            else{
                l++;
            }
        }
        return ans;
    }
};
