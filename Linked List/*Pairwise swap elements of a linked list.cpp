Node* pairWiseSwap(struct Node* head) 
    {
        if(head==NULL or head->next==NULL)
        {
            return head;
        }
        
        Node* temp=head;
        Node* prev=head;
        while(temp!=NULL and temp->next!=NULL)
        {
            /*cout<<prev->data<<"\n";
            cout<<temp->data<<"\n";
            printo(head);
            cout<<"\n";*/
            
            Node *curr=temp;
            Node *adv=temp->next;
            
            if(prev==head)
            {
                curr->next=adv->next;
                adv->next=curr;
                head=adv;
                temp=adv;
                prev=curr;
            }
            else{
                curr->next=adv->next;
                adv->next=curr;
                prev->next=adv;
                temp=adv;
                prev=curr;
            }
            
            temp=temp->next->next;
        }
        return head;
    }
