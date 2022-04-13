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

Node *evenAfterOdd(Node *head)
{
	//write your code here
    if(head==NULL || head->next ==NULL)
        return head ;
    
	Node* oddh =NULL ;
    Node* evenh = NULL ;
    Node* oddt = NULL ;
    Node* event = NULL ;
    
    while(head!=NULL)
    {
        //even
        if(head->data %2 == 0)
        {
            if(evenh == NULL)
            {
                evenh =head ;
                event = head ;
                head=head->next ;
            }
            else
            {
                event->next = head ;
                event =head ;
                head=head->next ;
            }
        }
        else
        {
            //odd 
             if(oddh == NULL)
            {
                oddh =head ;
                oddt = head ;
                head=head->next ;
            }
            else
            {
                oddt->next = head ;
                oddt = head ;
                head=head->next ;
            }
        }
        
    }
    if(event!=NULL)
    {
        event->next = NULL;
    	
    }
    else
    {
        oddt->next =NULL ;
        return oddh ;
    }
    if(oddt!=NULL)
    {
        oddt->next =evenh ;
        return oddh;
    }
    else
    {
        return evenh ;
    }
}