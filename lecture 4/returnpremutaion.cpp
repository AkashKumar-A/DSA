// input - input array
// size - length of input array
// element - value to be searched
#include <string>
using namespace std;
int returnPermutations(string input,string output[])
{
    if(input.size()==0)
    {
        output[0][0]=' ';
        return 1;
    }
    int p=0 ; 
    for(int i=0;i<input.size();i++)
    {
        string o1[10000] ; 
        string rem=input.substr( 0,i)+input.substr(i+1);
        int s1 = returnPermutations(rem,o1);
        for(int j=0;j<s1;j++)
        {
            output[p]=input[i]+o1[j];
            p+=1;
        }
    }
    return p; 
}








/*Return Permutations - String
Send Feedback
Given a string S, find and return all the possible permutations of the input string.
Note 1 : The order of permutations is not important.
Note 2 : If original string contains duplicate characters, permutations will also be duplicates.
Input Format :
String S
Output Format :
All permutations (in different lines)
Sample Input :
abc
Sample Output :
abc
acb
bac
bca
cab
cba*/