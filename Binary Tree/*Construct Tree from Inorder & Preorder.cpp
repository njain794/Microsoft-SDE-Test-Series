class Solution{
    public:
    
    Node* solve(int &i,int j,int in[],int pre[],int n)
    {
        if(j>n-1)
        {
            return NULL;
        }
        Node* root=new Node(pre[i]);
        
        int br=0;
        for(int k=j;k<n;k++)
        {
            if(pre[i]==in[k])
            {
                br=k;
                break;
            }
        }
        
        i++;
        root->left = solve(i,j,in,pre,br);
        root->right = solve(i,br+1,in,pre,n);
        return root;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        //Node *root;
        int i=0;
        return solve(i,0,in,pre,n);
    }
};
