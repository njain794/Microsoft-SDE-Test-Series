class Solution
{
    public:
    vector<int>ans;
    unordered_map<int,vector<int>>mp;
    int lev;
    
    void getLevel(Node* root, Node* find, int level)
    {
        if(root==NULL)
        {
            return;
        }
        if(root==find)
        {
            lev = level;
        }
        getLevel(root->left,find,level+1);
        getLevel(root->right,find,level+1);
    }
    
    vector<int> printCousins(Node* root, Node* find)
    {
        if(root==NULL or root==find)
        {
            return {-1};
        }
        
        getLevel(root,find,0);

        queue<Node*>q;
        q.push(root);
        q.push(NULL);
        int stage=0;
        
        while(!q.empty())
        {
            auto temp = q.front();
            q.pop();
            
            if(temp==NULL)
            {
                stage++;
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
            else
            {
                if(lev==stage)
                {
                    ans.push_back(temp->data);
                }
                
                if(temp->left && temp->left!=find && temp->right!=find)
                {
                    q.push(temp->left);
                }
                if(temp->right && temp->left!=find && temp->right!=find)
                {
                    q.push(temp->right);
                }
            }
        }
        
        if(!ans.size())
        {
            return {-1};
        }
        return ans;
    }
    
};
