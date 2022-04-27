int Search(vector<int> v, int k) 
{
    int n=v.size();
    int s=0;
    int e=n-1;
    
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(v[mid]==k)
        {
            return mid;
        }
        if(v[mid]>v[s])
        {
            if(v[s]<=k and k<v[mid])
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else
        {
            if(k>v[mid] and k<=v[e])
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    return -1;
}
