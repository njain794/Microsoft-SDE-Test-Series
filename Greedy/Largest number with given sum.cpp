string largestNumber(int n, int sum)
    {
        string ans="";
        for(int i=0;i<n;i++)
        {
            //cout<<sum<<"\n";
            if(sum==0)
            {
                ans.push_back('0');
            }
            else if(sum/10!=0)
            {
                ans.push_back('9');
                sum-=9;
            }
            else{
                ans.push_back(sum+'0');
                sum=0;
            }
        }
        if(sum>0)
        {
            return "-1";
        }
        return ans;
    }
