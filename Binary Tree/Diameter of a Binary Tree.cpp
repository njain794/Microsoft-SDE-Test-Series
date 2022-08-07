struct Pairo{
    int diameter;
    int height;
};
class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    
    Pairo solve(Node* root)
    {
        Pairo ans;
        if(root==NULL)
        {
            ans.height=0;
            ans.diameter=0;
            return ans;
        }
        Pairo leftRes = solve(root->left);
        Pairo rightRes = solve(root->right);
        
        ans.height = max(leftRes.height,rightRes.height)+1;
        ans.diameter = max(leftRes.height + rightRes.height,max(leftRes.diameter,rightRes.diameter));
    
        return ans;
    }
    
    int diameter(Node* root) 
    {
        if(root==NULL)
        {
            return 0;
        }
        Pairo ans = solve(root);
        return ans.diameter+1;
    }
};
