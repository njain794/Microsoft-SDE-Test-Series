class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        vector<int>ans;
        if(root==NULL)
        {
            return ans;
        }
        
        stack<Node*>s;
        
        while(!s.empty()||root)
        {
            if(root)
            {
                s.push(root);
                root=root->left;
            }
            else{
                root=s.top();
                s.pop();
                ans.push_back(root->data);
                root=root->right;
            }
        }
        return ans;
    }
};
