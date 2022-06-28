Node *removeDuplicates(Node *head)
{
    if(head==NULL or head->next==NULL)
    {
         return head;
    }
    
    Node *temp=head;
    while(temp)
    {
        Node *curr=temp->next;
        while(curr and curr->data==temp->data)
        {
            curr=curr->next;
        }
        temp->next=curr;
        temp=temp->next;
    }
    return head;
}
