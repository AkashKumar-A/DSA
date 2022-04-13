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

int length(Node *head)
{
    //Write your code here
    Node *temp = head;
       int count=0;
    while(temp!=NULL){
        //cout<<temp->data<<" ";
        temp = temp->next;
        count++;
    }
    
    return count;
    
}
