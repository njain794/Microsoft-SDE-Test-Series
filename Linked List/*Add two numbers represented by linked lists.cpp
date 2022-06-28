//Function to add two numbers represented by linked list.
    int size(struct Node* head)
    {
        int l=0;
        while(head!=NULL)
        {
            l++;
            head=head->next;
        }
        return l;
    }
    
    struct Node* rev(struct Node* head)
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
    
    void add(struct Node*&head,int value)
    {
        if(head==NULL)
        {
            head=new Node(value);
            return;
        }
        
            struct Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            struct Node* item=new Node(value);
            temp->next=item;
            item->next=NULL;
        
    }
    
    int solve(int l1,struct Node* lt1,int l2,struct Node* lt2,struct Node *&res)
    {
        if(!lt1 and !lt2)
        {
            return 0;
        }
        if(l1>l2)
        {
            int carry=solve(l1-1,lt1->next,l2,lt2,res);
            int sum=lt1->data+carry;
            
            int s=sum/10;
            int r=sum%10;
            add(res,r);
            return s;
        }
        else if(l1<l2)
        {
            int carry=solve(l1,lt1,l2-1,lt2->next,res);
            int sum=lt2->data+carry;
            
            int s=sum/10;
            int r=sum%10;
            add(res,r);
            return s;
        }
        else{
            int carry=solve(l1-1,lt1->next,l2-1,lt2->next,res);
            int sum=lt1->data+lt2->data+carry;
            
            int s=sum/10;
            int r=sum%10;
            add(res,r);
            return s;
        }
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        if(first==NULL && second==NULL)
        {
            return new Node(0);
        }
        else if(first==NULL)
        {
            return second;
        }
        else if(second==NULL)
        {
            return first;
        }
        
        int l1=size(first);
        int l2=size(second);
        //first=rev(first);
        //second=rev(second);
        //cout<<first->data<<" "<<second->data<<"\n";
        struct Node* res=new Node(0);

        int carry = solve(l1,first,l2,second,res);
        
        if(carry>0)
        {
            add(res,carry);
        }
        
        return rev(res->next);
    }
