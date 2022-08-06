class Solution
{
    public:
    
    int solve(Node* root,bool &flag)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        if(root->left==NULL && root->right==NULL)
        {
            return root->data;
        }
        
        int left = solve(root->left,flag);
        int right = solve(root->right,flag);
        
        if(flag && root->data!=left+right)
        {
            flag=false;
        }
        
        return root->data+left+right;
    }
    
    bool isSumTree(Node* root)
    {
        if(root==NULL)
        {
            return true;
        }
        
        bool flag=true;
        solve(root,flag);
        return flag;
    }
};
