class Solution
{
    public:
    
    int len(struct node*head)
    {
        if(head==NULL)
        {
            return 0;
        }
        return 1+len(head->next);
    }
    
    struct node *reverse (struct node *head, int k)
    { 
        if(head==NULL or k==0 or len(head)<k)
        {
            return head;
        }
        
        node *res=new node(0);
        node *ans=res;
        stack<node*>st;
        
        while(head!=NULL)
        {
            int i=0;
            while(i<k and head!=NULL)
            {
                st.push(head);
                head=head->next;
                i++;
            }

            while(st.size())
            {
                if(ans==NULL)
                {
                    ans=st.top();
                }
                else{
                    ans->next=st.top();
                    ans=ans->next;
                }
                st.pop();
            }
        }
        ans->next=head;
        return res->next;
    }
};
