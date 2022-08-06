class Solution
{
    public:
    
    vector<vector<int>>paths;
    
    void solve(Node *root,vector<int> &path,int total,int sum)
    {
        if(root==NULL)
        {
            return;
        }
        
        path.push_back(root->key);
        total+=root->key;

        if(total == sum)
        {
            paths.push_back(path);
            total-=root->key;
            path.pop_back();
            return;
        }
        
        solve(root->left,path,total,sum);
        solve(root->right,path,total,sum);

        total-=root->key;
        path.pop_back();
    }
    
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        vector<int>path;
        int total=0;
        solve(root,path,total,sum);
        return paths;
    }
};
