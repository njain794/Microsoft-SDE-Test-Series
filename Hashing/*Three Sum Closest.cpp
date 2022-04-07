class Solution{
  public:
    int threeSumClosest(vector<int> arr, int target) 
    {
        sort(arr.begin(),arr.end());
        int res=INT_MAX;
        int n = arr.size();
        for(int i=0;i<n-2;i++)
        {
            int s=i+1;
            int e=n-1;
            while(s<e)
            {
                int num=arr[i]+arr[s]+arr[e];
                if(abs(num-target)<abs(res-target))
                {
                    res=num;
                }
                if(num==target)
                {
                    return num;
                }
                if(abs(res-target)==abs(num-target))
                {
                    if(num>res)
                    {
                        res=num;
                    }
                }
                if(num<target)
                {
                    s++;
                }
                else if(num>target){
                    e--;
                }
            }
        }
        return res;
    }
};
