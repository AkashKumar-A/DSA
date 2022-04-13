#include <iostream>
#include <queue>
/*Sample Input 1:
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
 Sample Output 1:
8:L:3,R:10
3:L:1,R:6
10:L:-1,R:14
1:L:-1,R:-1
6:L:4,R:7
14:L:13,R:-1
4:L:-1,R:-1
7:L:-1,R:-1
13:L:-1,R:-1*/

#include<queue>
void printLevelWise(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root==nullptr) return;
    
    queue<BinaryTreeNode<int>*> print;
    print.push(root);
    while(print.size() != 0 ){
         BinaryTreeNode<int>* front = print.front();
        print.pop();
        cout<<front->data<<":";
        if(front->left!=NULL){
            cout<<"L:"<<front->left->data<<","; 
            print.push(front->left);
            }
        if(front->left == NULL){
            cout<<"L:-1,";
        }
        
        if(front->right!=NULL){
            cout<<"R:"<<front->right->data;   
             print.push(front->right);
        }
       if(front->right == NULL){
           cout<<"R:-1";
       }
        cout<<endl;   

        }
    }


template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;
#include "solution.h"

BinaryTreeNode<int>* takeInput() {
    int rootData;

    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    printLevelWise(root);
}