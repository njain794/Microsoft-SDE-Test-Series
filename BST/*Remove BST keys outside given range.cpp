Node* removekeys(Node* root, int l, int r) 
    {
        if(root==NULL)
        {
            return root;
        }
        
        root->left = removekeys(root->left,l,r);
        root->right = removekeys(root->right,l,r);
        
        if(root->data>r)
        {
            return root->left;
        }
        else if(root->data<l)
        {
            return root->right;
        }
        return root;
    }
