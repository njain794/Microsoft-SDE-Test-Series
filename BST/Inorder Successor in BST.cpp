class Solution{
  public:
    
    bool flag=false;
    void solve(Node* root,Node*x,Node *&temp)
    {
        if(root==NULL)
        {
            return;
        }
        solve(root->left,x,temp);
        if(flag && root->data>x->data)
        {
            flag=false;
            temp=root;
            return;
        }
        if(root==x)
        {
            flag=true;
        }
        solve(root->right,x,temp);
    }
    Node *inOrderSuccessor(Node *root, Node *x)
    {
        if(root==NULL)
        {
            return NULL;
        }
        Node* temp=NULL;
        solve(root,x,temp);
        return temp;
    }
};
