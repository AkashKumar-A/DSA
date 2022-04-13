Node* appendLastNToFirst(Node* head,int n) { 
    if(head==NULL)
    {
        return head;
    }
    if(n==0)
    {
        return head;
    }
    Node* temp=head,*t=head;
    int i = -n;
    while(temp->next!=NULL) {
        if(i >= 0) 
            t = t -> next;
            temp=temp -> next;
            i++;
    }
    temp -> next = head;
    head = t -> next;
    t -> next = NULL;
    return head;
}