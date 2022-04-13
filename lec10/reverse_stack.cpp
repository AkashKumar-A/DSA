#include<bits/stdc++.h>
#include<stack>
void reverseStack(stack<int> &input, stack<int> &extra) {
    //Write your code here
    stack<int> temp;
    while(!input.empty()){
        int t = input.top();
        temp.push(t);
        input.pop();
        
    }
     while(!temp.empty()){
        int t = temp.top();
        extra.push(t);
        temp.pop();
        
    }
    while(!extra.empty()){
        int t = extra.top();
        input.push(t);
        extra.pop();
        
    }
}