/**********************************************************
	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/
#include<stack>
void zigZagOrder(BinaryTreeNode<int> *root) {
    // Write your code here
    if (!root)
        return;
 
    // declare two stacks
    stack<BinaryTreeNode<int>*> currentlevel;
    stack<BinaryTreeNode<int>*> nextlevel;
 
    // push the root
    currentlevel.push(root);
 
    // check if stack is empty  
    bool lefttoright = true;
    while (!currentlevel.empty()) {
 		int len = currentlevel.size();
        // pop out of stack
       
 		
        // if not null
        while(len>0){
             BinaryTreeNode<int>* temp = currentlevel.top();
       		 currentlevel.pop();
            if (temp) {
             cout << temp->data << " ";
 
            // store data according to current
            // order.
            if (lefttoright) {
                if (temp->left)
                    nextlevel.push(temp->left);
                if (temp->right)
                    nextlevel.push(temp->right);
            }
            else {
                if (temp->right)
                    nextlevel.push(temp->right);
                if (temp->left)
                    nextlevel.push(temp->left);
            }
        }
 
        if (currentlevel.empty()) {
            lefttoright = !lefttoright;
            swap(currentlevel, nextlevel);
        }
            --len;
        }
        
        cout<<endl;
    }
}