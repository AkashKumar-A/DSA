Node *deleteNodeRec(Node *head, int pos) {
	//Write your code here
    if(head==NULL){
        return head;
    }
    if(pos==0){
        if(head->next==NULL){
            head = NULL;
            return head;
        }
        Node *a = head->next;
        Node *b = a->next;
        head = a;
        // delete a;
        return head;
    }
    else{
   		 head->next  = deleteNodeRec(head->next,pos-1);
        return head;
        }
}
