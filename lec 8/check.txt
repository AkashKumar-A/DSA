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

Node * reverse(Node *h2) {
    
    if(h2->next==NULL)
    {
        return h2;
    }
    
    Node*head1=reverse(h2->next);
    Node *temp = h2->next;
    temp->next = h2;
    h2->next = NULL;
    return head1;
    
    
}
bool isPalindrome(Node *head)
{
    
    if(head==NULL || head->next==NULL){
        return true;
    }
    
	Node *temp=head;
  	Node *fast=temp->next; 
    Node *slow=temp;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    
    // Node *mid=slow;
     Node *h2=slow->next;
    slow->next=NULL;
    
 Node *newhead=reverse(h2);
  
    
    while(head!=NULL && newhead!=NULL){
        
        if(head->data!=newhead->data){
            return false;
        }
        head=head->next;
        newhead = newhead->next;
        
    }
    
       return true;
    
    
}