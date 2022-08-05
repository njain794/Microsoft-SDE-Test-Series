Node* solve(int in[], int post[], int &start,int i,int n)
{
    if(i>n-1 or start<0)
    {
        return NULL;
    }
    Node *root=new Node(post[start]);
    
    int br;
    for(int j=i;j<n;j++)
    {
        if(in[j]==post[start])
        {
            br=j;
            break;
        }
    }
    
    start--;
    root->right=solve(in,post,start,br+1,n);
    root->left=solve(in,post,start,i,br);
    
    return root;
}


//Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int in[], int post[], int n) 
{
    int start=n-1;
    return solve(in,post,start,0,n);
}
