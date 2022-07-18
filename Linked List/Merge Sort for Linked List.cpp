class Solution{
  public:
  
    Node* mid(Node *head)
    {
        if(head==NULL or head->next==NULL)
        {
            return head;
        }
        Node *small=head;
        Node *fast=head->next;
        
        while(fast!=NULL and fast->next!=NULL)
        {
            small=small->next;
            fast=fast->next->next;
        }
        return small;
    }
  
    Node* merge(Node* a,Node* b)
    {
        if(a==NULL)
        {
            return b;
        }
        else if(b==NULL)
        {
            return a;
        }
        
        Node *c;
        if(a->data<=b->data)
        {
            c=a;
            c->next=merge(a->next,b);
        }
        else{
            c=b;
            c->next=merge(a,b->next);
        }
        return c;
    }
  
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) 
    {
        if(head==NULL or head->next==NULL)
        {
            return head;
        }
        Node *midd = mid(head);
        Node *p1=head;
        Node *p2=midd->next;
        midd->next=NULL;
        
        p1=mergeSort(p1);
        p2=mergeSort(p2);
        return merge(p1,p2);
    }
};
