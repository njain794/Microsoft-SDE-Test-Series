
/******************/O(N^2) Solution/*************************/

class Solution 
{
    public:
    
    static bool comp(Job a,Job b)
    {
        return a.profit>b.profit;
    }
    
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        //vector<int>ans;
        sort(arr,arr+n,comp);
        int day=0;
        int profit=0;
        bool done[n]={false};
        for(int i=0;i<n;i++)
        {
            for(int j=min(n,arr[i].dead)-1;j>=0;j--)
            {
                if(done[j]==false)
                {
                    done[j]=true;
                    day+=1;
                    profit+=arr[i].profit;
                    break;
                }
            }
        }
        return {day,profit};
    } 
};

/******************/O(n*log(n)) Solution/***************/
  class Solution {
    public:
    static bool key(Job J1, Job J2) {
        if (J1.dead == J2.dead)
            return J1.profit > J2.profit;
        return J1.dead < J2.dead;
    }
    vector<int> JobScheduling(Job arr[], int n) { 
        sort(arr, arr + n, key);
        priority_queue<int, vector<int>, greater<int>> q;
        for (int i = 0; i < n; i++) {
            if (q.size() < arr[i].dead)
                q.push(arr[i].profit);
            else if (q.top() < arr[i].profit) {
                q.pop();
                q.push(arr[i].profit);
            }
        }
        int cnt = 0, profit = 0;
        while (!q.empty()) {
            cnt++;
            profit += q.top();
            q.pop();
        }
        return {cnt, profit};
    } 
};
