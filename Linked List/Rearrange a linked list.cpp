void rearrangeEvenOdd(Node *head)
    {
       if(head==NULL or head->next==NULL or head->next->next==NULL)
       {
           return;
       }
       
       Node *odd=head;
       Node *even=head->next;
       Node *evenh=even;
        //Node *oddh=head;

       
       while(even!=NULL and even->next!=NULL)
       {
           odd->next=odd->next->next;
           even->next=even->next->next;
           odd=odd->next;
           even=even->next;
       }
       odd->next=evenh;
       return;
    }
