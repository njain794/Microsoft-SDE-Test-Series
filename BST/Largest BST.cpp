bool solve(Node* root, int lmin, int rmax)
    {
        if(root==NULL)
        {
            return true;
        }
        
        if(root->data<=lmin || root->data>=rmax)
        {
            return false;
        }
        return solve(root->left,lmin,root->data) && solve(root->right,root->data,rmax);
        
    }
    
    bool isBST(Node* root) 
    {
        if(root==NULL)
        {
            return true;
        }
        int lmin = INT_MIN;
        int rmax = INT_MAX;
        
        return solve(root,lmin,rmax);
    }
    
    int count(Node* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        return 1+count(root->left)+count(root->right);
    }
    
    void solve(Node *root,int &cnt)
    {
        if(root==NULL)
        {
            return;
        }
        if(isBST(root))
        {
            cnt=max(cnt,count(root));
        }
        solve(root->left,cnt);
        solve(root->right,cnt);
    }
    
    int largestBst(Node *root)
    {
        if(root==NULL)
        {
            return 0;
        }
    	int cnt=1;
    	solve(root,cnt);
    	return cnt;
    }
