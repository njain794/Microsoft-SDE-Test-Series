int minlen(string arr[],int n)
    {
        int l=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int d=arr[i].size();
            l=min(l,d);
        }
        return l;
    }
    
    string longestCommonPrefix (string arr[], int n)
    {
        for(int k=1;k<n;k++)
        {
            if(arr[0][0]!=arr[k][0])
            {
                return "-1";
            }
        }
        int len=minlen(arr,n);
        string res="";
        char curr;
        for(int i=0;i<len;i++)
        {
            curr=arr[0][i];
            for(int j=1;j<n;j++)
            {
                if(curr!=arr[j][i])
                {
                    return res;
                }
            }
            res.push_back(curr);
        }
        return res.size()==0?"-1":res;
        //return "-1";
    }
