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
