/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

void printNodesWithoutSibling(BinaryTreeNode<int> *root) {
    // Write your code here
     if (root == NULL)
      return;
 
    // If this is an internal node, recur for left
    // and right subtrees
    if (root->left != NULL && root->right != NULL)
    {
        printNodesWithoutSibling(root->left);
        printNodesWithoutSibling(root->right);
    }
    else if (root->right != NULL)
    {
        cout << root->right->data << " ";
        printNodesWithoutSibling(root->right);
    }
 
    // If right child is NULL and left is
    // not, print left child
    // and recur for left child
    else if (root->left != NULL)
    {
        cout << root->left->data << " ";
        printNodesWithoutSibling(root->left);
    }
}