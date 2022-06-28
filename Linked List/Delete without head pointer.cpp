void deleteNode(Node *del)
{
   Node *curr=del;
   Node *adv=del->next;

   curr->data=adv->data;
   curr->next=adv->next;
   delete adv;
}
