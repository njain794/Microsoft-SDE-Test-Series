class Solution{
    public:
    vector<int> postOrder(Node* node) 
    {
        vector<int>ans;
        if(node==NULL)
        {
            return ans;
        }
        stack<Node*>s;
        s.push(node);
        
        while(s.size()>0)
        {
            Node* temp=s.top();
            ans.push_back(temp->data);
            s.pop();
            
            if(temp->left)
            {
                s.push(temp->left);
            }
            if(temp->right)
            {
                s.push(temp->right);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
