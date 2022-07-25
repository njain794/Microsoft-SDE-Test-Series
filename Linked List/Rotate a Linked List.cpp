class Solution
{
    public:
    
    int len(Node* head)
    {
        if(head==NULL)
        {
            return 0;
        }
        return 1+len(head->next);
    }
    
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        if(head==NULL or head->next==NULL or len(head)<k)
        {
            return head;
        }
        if(len(head)==k)
        {
            return head;
        }
        Node *temp=head;
        
        int i=0;
        while(temp!=NULL and i<k-1)
        {
            temp=temp->next;
            i++;
        }    
        Node *ans=temp->next;
        temp->next=NULL;
        Node *res=ans;
        
        while(res->next!=NULL)
        {
            res=res->next;
        }
        res->next=head;
        return ans;
    }
};
    
