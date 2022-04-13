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

void printIthNode(Node *head, int i)
{
    //Write your code here
    if(head==NULL){
        cout<<" ";
        return;
    }
    int n=0;
    Node *temp = head;
    while(temp!=NULL && n<i){
        temp = temp->next;
        n++;
    }
    if(temp!=NULL)
    	cout<<temp->data;
    else
        cout<<" ";
}