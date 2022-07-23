int len(Node *head)
{
    if(head==NULL)
    {
        return 0;
    }
    return 1+len(head->next);
}

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    if(head1==NULL or head2==NULL)
    {
        return -1;
    }
    
    int len1=len(head1);
    int len2=len(head2);
    
    if(len1>len2)
    {
        int cnt=len1-len2;
        while(cnt--)
        {
            head1=head1->next;
        }
    }
    else
    {
        int cnt=len2-len1;
        while(cnt--)
        {
            head2=head2->next;
        }
    }
    
    while(head1 and head2)
    {
        if(head1==head2)
        {
            return head1->data;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return -1;
}
