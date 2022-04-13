Node *skipMdeleteN(Node *head,  int M, int N){
    
    Node *curr = head, *rem;
    int count;
    if(M==0){
        return NULL;
    }
    while(curr)
    {
        for (count = 1; count<M && curr!= NULL; count++)
        {
            curr = curr->next;
        }
        if (curr == NULL)
        {
            return head;
        }
        rem = curr->next;
        for(count = 1; count<=N && rem!= NULL; count++)
        {
            Node *temp = rem;
            rem = rem->next;
            free(temp);
        }
        //link to remaining nodes
        //continue iteration for the remaining nodes
        curr->next = rem;
        curr = rem;
    }
    return head;
}