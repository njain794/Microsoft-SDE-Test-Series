int canRepresentBST(int arr[], int n) 
    {
        stack<int>st;
        int root=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]<root)
            {
                return false;
            }
            
            while(!st.empty() && arr[i]>st.top())
            {
                root=st.top();
                st.pop();
            }
            st.push(arr[i]);
        }
        return true;
    }
