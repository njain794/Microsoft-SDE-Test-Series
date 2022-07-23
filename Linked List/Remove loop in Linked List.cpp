void removeLoop(Node* head)
    {
        if(head==NULL or head->next==NULL)
        {
            return;
        }
        
        Node *slow=head;
        Node *fast=head;
        Node *temp=head;
        
        while(slow!=NULL and fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast)
            {
                if(slow==head)
                {
                    while(slow->next!=head)
                    {
                        slow=slow->next;
                    }
                    slow->next=NULL;
                }
                else
                {
                      while(slow->next!=temp->next)
                      {
                          slow=slow->next;
                          temp=temp->next;
                      }
                      slow->next=NULL;
                }
                break;
            }
        }
        return;
    }
