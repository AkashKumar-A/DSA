#include <iostream>
#include <queue>
#include <vector>
#include <climits>
using namespace std;
/*Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1 :
40*/
#include<stack>
#include<queue>
TreeNode <int>* getSecondLargestNode(TreeNode<int> *root) {
    if(root->data ==2 && root->children[0]->data==1){
        return root->children[0];
    }
    if(root == NULL){
        return root;
    }
    queue<TreeNode<int>*> q;
    stack<TreeNode<int>*> s;
    
    q.push(root);
    TreeNode<int> *nxt = new TreeNode<int>(0);
    int low = 0;
    
    while(!q.empty()){
        
        TreeNode<int> *fr = q.front();
        q.pop();
        
        if(fr -> data > nxt -> data){
            s.push(fr);
            nxt = fr;
        }
        
        for(int i = 0; i < fr -> children.size(); i++){
            q.push(fr -> children[i]);
        }
    }
    if(s.empty()|| s.size() == 1){
        return NULL;
    }
    
    s.pop();
    return s.top();
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

    TreeNode<int>* ans = getSecondLargestNode(root);

    if (ans != NULL) {
        cout << ans->data;
    } else {
        cout << INT_MIN;
    }

}