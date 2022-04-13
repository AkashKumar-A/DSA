#include<iostream>
#include<string.h>
using namespace std;

bool helper(char input[],int start,int end){
    
    //see here we are checking if string has zero character or only 1 character
    
    if(input[0]=='\0' || input[1]=='\0')
        return true;
    
    //base 
    // we can return 1 also since true==1 in c++
    if(start>=end)
        return true;
    
    
    // herw we are checking if 1st charater and last chracter is same or not if same then we check for rest of the string 
    if(input[start]==input[end])
    {
        // here recursiveans will bring answer for rest of the string
        bool recursiveans=helper(input,start+1,end-1);
        
        
        if(recursiveans==true)
            return true;
    }
    
    
    return false;
    
    
    
    
    
}



bool checkPalindrome(char input[]) {
    // Write your code here
    // int n = strlen(input);
    // if(input[0]==input[n-1]){
    //     checkPalindrome()
    // }
    // else{
    //     return false;
    // }
    int n=strlen(input);
    return helper(input,0,n-1);
    
    
}


