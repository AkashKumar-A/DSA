#include <iostream>
#include <string>
using namespace std;

void printKeypad(int num,string output=""){
	if (num==0){
        cout<<output<<endl;
        return;
    }
    int x=num%10;
    string helper[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int nN = num/10;
    string alphabets=helper[x];
    for(int i=0;i<alphabets.size();i++){
        printKeypad(nN,alphabets[i]+output);
    }
}













/*Print Keypad Combinations Code
Send Feedback
Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.
Note : The order of strings are not important. Just print different strings in new lines.
Input Format :
Integer n
Output Format :
All possible strings in different lines
Constraints :
1 <= n <= 10^6
Sample Input:
23
Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf*/