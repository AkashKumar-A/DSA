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

Node *reverseLinkedList(Node *head) {
    // Write your code here
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *pre=NULL;
    Node *current = head;
    Node *n;
    while(current!=NULL){
        n= current->next;
        current->next = pre;
        pre = current;
        current = n;
       // n=n->next;
        
    }
    // pre->next = current;
    return pre;
}