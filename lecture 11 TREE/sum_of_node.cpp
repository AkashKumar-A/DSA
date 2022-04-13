#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int sumOfNodes(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL){
        return 0;
    }
    int sum =0;
    queue<TreeNode<int>*> count;
    count.push(root);
    sum += root->data;
    while(count.size()!=0){
        for(int i=0;i<(count.front())->children.size();i++){
            sum += (count.front())->children[i]->data;
            count.push((count.front())->children[i]);
        }
        count.pop();
    }
    return sum;
}
template <typename T>
class TreeNode {
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};

#include "solution.h"

TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

int main() {
    TreeNode<int>* root = takeInputLevelWise();
    cout << sumOfNodes(root);
}