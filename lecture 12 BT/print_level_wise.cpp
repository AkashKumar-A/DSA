/**********************************************************

	Following are the Binary Tree Node class structure and
	the Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

	template <typename T>
	class Node {
		public:
    	T data;
    	Node<T> *next;
    	Node(T data) {
        	this->data=data;
        	this->next=NULL;
    	}
	};

***********************************************************/
vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int>*>pendingNodes;
    if(root!=NULL)
    pendingNodes.push(root);
     int nxtLevelCount=0, currlevelRemaining =1;
    vector<Node<int>*> output;
     Node<int> *currLevelHead=NULL;
     Node<int> *currLevelTail=NULL;
    while(pendingNodes.size()!=0){
        BinaryTreeNode<int> *first=pendingNodes.front();
        pendingNodes.pop();
        Node<int> *newNode=new Node<int>(first->data);
        if(currLevelHead==NULL){
            currLevelHead=newNode;
            currLevelTail=newNode;
        }
        else{
            currLevelTail->next=newNode;
            currLevelTail=newNode;
        }
        if(first->left!=NULL){
            pendingNodes.push(first->left);
            nxtLevelCount++;
        }
         if(first -> right != NULL){
            pendingNodes.push(first -> right);
            nxtLevelCount++;
        }
    	currlevelRemaining--;
        
        if(currlevelRemaining == 0){
            output.push_back(currLevelHead);
            currLevelHead = NULL;
            currLevelTail = NULL;
            currlevelRemaining = nxtLevelCount;
            nxtLevelCount = 0;
        }
    }
    return output;
}

/*
vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
    // Write your code here
    vector<Node<int>*>ans;
    Node<int> *head=NULL ,*tail=NULL;
     if(root==nullptr) {
        ans.push_back(NULL);
         return ans;
     }
    
    queue<BinaryTreeNode<int>*> print;
    print.push(root);
    while(print.size() != 0 ){
         int len = print.size();
        while(len>0){
            BinaryTreeNode<int>* front = print.front();
            Node<int>* temp=front;
        	print.pop();
        	cout<<front->data<<" ";
            if(head==NULL){
                head = temp;
                tail = temp;
                ans.push_back(head);
            }
            else{
                tail->next = temp;
                tail = temp;
                ans.push_back(tail);
            }
        	if(front->left!=NULL){
            	print.push(front->left);
                ans.push_back()
            }
        
        	if(front->right!=NULL){
             	print.push(front->right);
        	}
            len--;
        }
         
        cout<<endl;   

        }
}*/