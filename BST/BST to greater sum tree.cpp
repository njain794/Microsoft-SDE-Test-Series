int sum=0;
    void solve(Node *&root)
    {
        if(root==NULL)
        {
            return;
        }
        
        solve(root->right);
        int num=root->data;
        root->data=sum;
        sum+=num;
        solve(root->left);
    }
    void transformTree(struct Node *root)
    {
        if(root==NULL)
        {
            return;
        }
        
        solve(root);
    }
