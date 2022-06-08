class Solution
{
    public:
    int maxConsecutiveOnes(int n)
    {
        int ans=0;
        int len=0;
        
        while(n)
        {
            if(n&1)
            {
                len++;
            }
            else{
                len=0;
            }
            ans=max(ans,len);
            n>>=1;
        }
        return ans;
        // code here
    }
};
