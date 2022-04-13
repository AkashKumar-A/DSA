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
int height(BinaryTreeNode<int>* node)
{
    /* base case tree is empty */
    if (node == NULL)
        return 0;
 
    /* If tree is not empty then
    height = 1 + max of left
        height and right heights */
    return 1 + max(height(node->left),
                   height(node->right));
}
bool isBalanced(BinaryTreeNode<int> *root) {
	// Write your code here
   int lh; /* for height of left subtree */
    int rh; /* for height of right subtree */
 
    /* If tree is empty then return true */
    if (root == NULL)
        return 1;
 
    /* Get the height of left and right sub trees */
    lh = height(root->left);
    rh = height(root->right);
 
    if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;
 
    /* If we reach here then
    tree is not height-balanced */
    return 0;
    
}