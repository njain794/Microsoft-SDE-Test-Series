class Solution
{
  public:
    //Function to check if S is a subtree of tree T.
    
    bool isIdentical(Node *t,Node *s)
    {
        if(!t && !s)
        {
            return true;
        }
        if(!t || !s)
        {
            return false;
        }
        if(t->data!=s->data)
        {
            return false;
        }
        return isIdentical(t->left,s->left) && isIdentical(t->right,s->right);
    }
    
    bool isSubTree(Node* t, Node* s) 
    {
        if(!t && !s)
        {
            return true;
        }
        if(!t || !s)
        {
            return false;
        }
        
        if(t->data == s->data)
        {
            if(isIdentical(t,s))
            {
                return true;
            }
        }
        return isSubTree(t->left,s)||isSubTree(t->right,s);
    }
};
