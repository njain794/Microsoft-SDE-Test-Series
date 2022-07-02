class Solution{
  public:
  
    Node* sortedMerge(Node* a, Node* b)  
    {  
        if(a==NULL)
        {
            return b;
        }
        else if(b==NULL)
        {
            return a;
        }
        
        Node *res;
        if(a->data < b->data)
        {
            res = a;
            res->next = sortedMerge(a->next,b);
        }
        else
        {
            res = b;
            res->next = sortedMerge(a,b->next);
        }
        return res;
    } 
  
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int k)
    {
         Node *res = NULL;
         
         for(int i=0;i<k;i++)
         {
             res=sortedMerge(res,arr[i]);
         }
         return res;
    }
};
