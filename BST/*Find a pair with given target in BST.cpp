unordered_set<int>st;
    void solve(Node* root,int target,int &ans)
    {
        if(!root)
        {
            return;
        }
        if(ans==1)
        {
            return;
        }
        solve(root->left,target,ans);
        
        if(st.find((target-root->data))==st.end())
        {
            st.insert(root->data);
        }
        else
        {
            ans=1;
        }
        
        solve(root->right,target,ans);
    }
    
    int isPairPresent(struct Node *root, int target)
    {
        int ans=0;
        solve(root,target,ans);
        return ans;
    }
