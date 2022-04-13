/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    if(head1==NULL||head2==NULL){
        if(head1==NULL){
            return head2;
        }
        else{
            return head1;
        }
    }
 Node*finalh=NULL;
    Node*finalt=NULL;
 while(head1!=NULL&&head2!=NULL){
  if(head1->data>=head2->data){
      if(finalh==NULL){
          finalh=head2; 
          finalt=head2;
      }
      else{
          finalt->next=head2;
          finalt=head2;
      }
      head2=head2->next; 
  }   
     else if(head2->data>head1->data){
         if(finalh==NULL){
          finalh=head1; 
             finalt=head1;
     	 }
      	else{
          finalt->next=head1;
          finalt=head1;
      	}
      head1=head1->next; 
     }
     
 } 
  while(head2!=NULL){
     finalt->next=head2;
          finalt=head2;
      head2=head2->next;
  }  
    
    while(head1!=NULL){
    finalt->next=head1;
          finalt=head1;
      head1=head1->next;
  }  
    return finalh;
}
