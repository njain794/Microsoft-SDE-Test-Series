struct Node* partition(struct Node* head, int x) 
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    
    Node* lhead=new Node(-1);
    Node* ltail=lhead;
    Node* eqhead=new Node(-1);
    Node* eqtail=eqhead;
    Node* ghead=new Node(-1);
    Node* gtail=ghead;
    Node*temp=head;
    
    while(temp!=NULL)
    {
        if(temp->data<x)
        {
            ltail->next=new Node(temp->data);
            ltail=ltail->next;
        }
        else if(temp->data==x)
        {
            eqtail->next=new Node(temp->data);
            eqtail=eqtail->next;
        }
        else{
            gtail->next=new Node(temp->data);
            gtail=gtail->next;
        }
        temp=temp->next;
    }
    
    gtail->next=NULL;
    eqtail->next=ghead->next;
    ltail->next=eqhead->next;
    
    return lhead->next;
    
}
