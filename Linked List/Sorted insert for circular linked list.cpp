Node *sortedInsert(Node* head, int data)
    {
        struct Node *item = new Node(data);

        if(head==NULL)
        {
            item->next=item;
            return item;
        }
        
        Node *temp=head;
        Node *kemp=head;
        while(kemp->next!=head)
        {
            kemp=kemp->next;
        }
        Node *prev=kemp;
        while(1)
        {
            if(temp->data>data)
            {
                item->next=temp;
                prev->next=item;
                if(temp==head)
                {
                    head=item;
                }
                break;
            }
            if(temp->next==head)
            {
                item->next=temp->next;
                temp->next=item;
                head=item;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        
        return head;
           //Your code here
    }
