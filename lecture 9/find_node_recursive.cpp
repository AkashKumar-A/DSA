// int *findNodeRec(Node *head, int n)
// {
//     if(head==NULL){
//         return -1;   
//     }
    
//     int ans =0;
//     if(head->data==n){
//         return ans;
//     }
//     ans = findNodeRec(head->next,n);
//     return ans+1;
// }

//comment

int findNodeRec(Node *head, int n)
{
    if(head==NULL){
        return -1;   
    }
    
    if(head->data==n){
        return 0;
    }
    
    int smallAns = findNodeRec(head->next, n);
	if(smallAns == -1) {
        //not found
        return -1;
    } else {
        return 1 + smallAns; 
    }
}