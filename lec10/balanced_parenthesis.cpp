#include<bits/stdc++.h>
#include<stack>
bool isBalanced(string expression) 
{
    // Write your code here
    string exp =  expression;/*
    int len = exp.length();
    if (len==0 || len==1) {
        return false;
    }
 
    // take an empty stack of characters
    stack<char> stack;
 
    // traverse the input expression
    for(int i=0;i<len;i++){
        if(exp[i]=='(' ||exp[i]=='{' ||exp[i]=='['){
            stack.push(exp[i]);
        }
        if(exp[i]==')' ||exp[i]=='}' ||exp[i]==']'){
            char t;
            if(stack.empty()!=1){
            	 t= stack.top();
            }
            else
                return false;
            if(t=='(' || t=='{' || t=='['){
                if(stack.empty()){
               	 return false;
                }
                else{
                    stack.pop();
                }
            }
            else{
                return false;
            }
        }
    }
    return true; */
    if (exp.length() & 1) {
        return false;
    }
 
    // take an empty stack of characters
    stack<char> stack;
 
    // traverse the input expression
    for (char ch: exp)
    {
        // if the current character in the expression is an opening brace,
        // push it into the stack
        if (ch == '(' || ch == '{' || ch == '[') {
            stack.push(ch);
        }
 
        // if the current character in the expression is a closing brace
        if (ch == ')' || ch == '}' || ch == ']')
        {
            // return false if a mismatch is found (i.e., if the stack is empty,
            // the expression cannot be balanced since the total number of opening
            // braces is less than the total number of closing braces)
            if (stack.empty()) {
                return false;
            }
 
            // pop character from the stack
            char top = stack.top();
            stack.pop();
 
            // if the popped character is not an opening brace or does
            // not pair with the current character of the expression
            if ((top == '(' && ch != ')') ||
                    (top == '{' && ch != '}') ||
                    (top == '[' && ch != ']')) {
                return false;
            }
        }
    }
 
    // the expression is balanced only when the stack is empty at this point
    return stack.empty();
}