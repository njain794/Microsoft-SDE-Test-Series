vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        deque<int>dq;
        vector<int>ans;
        int i=0;
        int j=0;
        while(j<n)
        {
            if(j-i+1<k)
            {
                while(!dq.empty() and arr[j]>dq.back())
                {
                    dq.pop_back();
                }
                dq.push_back(arr[j]);
                j++;
            }
            else if(j-i+1==k)
            {
                while(!dq.empty() and arr[j]>dq.back())
                {
                    dq.pop_back();
                }
                dq.push_back(arr[j]);
                ans.push_back(dq.front());
                if(arr[i]==dq.front())
                {
                    dq.pop_front();
                }
                i++;
                j++;
            }
        }
        return ans;
    }
