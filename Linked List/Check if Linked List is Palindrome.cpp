Node* getMiddle(Node *head)
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
    
        Node* slow=head;
        Node* fast=head->next;
    
        while(fast!=NULL and fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
    
        return slow;
    }
    
    Node* rev(struct Node* head)
    {
        if(head==NULL or head->next==NULL)
        {
            return head;
        }
        Node* small=rev(head->next);
        Node* c=head;
        c->next->next=c;
        c->next=NULL;
        return small;
    }
    
    bool isPalindrome(Node *head)
    {
        if(head==NULL or head->next==NULL)
        {
            return true;
        }
        Node *mid=getMiddle(head);
        //cout<<mid->data<<" ";
        Node *a=head;
        Node *b=mid->next;
        mid->next=NULL;
        
        b=rev(b);
        while(a!=NULL and b!=NULL)
        {
            if(a->data!=b->data)
            {
                return false;
            }
            a=a->next;
            b=b->next;
        }
        return true;
    }
