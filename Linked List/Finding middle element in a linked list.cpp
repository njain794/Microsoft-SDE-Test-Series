// Handles middle element for both odd and even cases

int getMiddle(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head->data;
    }

    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL and fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }

    return slow->data;
}
