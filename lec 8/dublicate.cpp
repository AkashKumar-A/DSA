Node *removeDuplicates(Node *head)
{
     if(head==NULL){
        return 0;
    }
    Node *t1=head;
    Node *t2=head->next;
     Node* next;
   
    while( t2!=NULL){
       if(t1->data==t2->data){
           next=t2->next;
           free(t2);
           t2=next;
           t1->next=t2;
       }
        else
    	{
            t1=t1->next;
        	t2 =t2->next;
    	}   
    }
    return head;
    
}