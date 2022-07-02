class Solution
{
    public:
    Node* removeAllDuplicates(struct Node* head)
    {
        if(head==NULL or head->next==NULL)
    {
        return head;
    }
    
    Node *prev=new Node(NULL);
    prev->next=head;
    Node *res=prev;
    Node *temp=head;
    
    while(temp!=NULL)
    {
        while(temp->next!=NULL and prev->next->data==temp->next->data)
        {
            temp=temp->next;
        }
        if(prev->next==temp){
            prev=prev->next;
        }
        else{
            prev->next=temp->next;
        }
        temp=temp->next;
    }
    return res->next;
    }
};
