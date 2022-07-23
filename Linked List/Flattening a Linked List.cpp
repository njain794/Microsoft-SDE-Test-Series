/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

Node *merge(Node *h1,Node *h2)
{
    if(h1==NULL)
    {
        return h2;
    }
    else if(h2==NULL)
    {
        return h1;
    }
    
    Node *h3;
    if(h1->data<=h2->data)
    {
        h3=h1;
        h3->bottom=merge(h1->bottom,h2);
    }
    else{
        h3=h2;
        h3->bottom=merge(h1,h2->bottom);
    }
    return h3;
}

/*  Function which returns the  root of 
    the flattened linked list. */
Node *flatten(Node *root)
{
   /*Node *ans=NULL;
   Node *res=ans;
   while(root!=NULL and root->next!=NULL)
   {
       ans->next=merge(ans,root->bottom);
       root=root->next;
       ans=ans->next;
   }
   return res->next;*/
   if(root==NULL or root->next==NULL)
   {
       return root;
   }
   return merge(root,flatten(root->next));
}
