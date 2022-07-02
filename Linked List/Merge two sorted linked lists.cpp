//Function to merge two sorted linked list.
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
