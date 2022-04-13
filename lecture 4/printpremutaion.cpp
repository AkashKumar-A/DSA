// #include <iostream>
// #include <string>
// using namespace std;

// void printPermutations(string input){

//     	/* Don't write main() function.
// 	 * Don't read input, it is passed as function argument.
// 	 * Print output as specified in the question
// 	*/
// }
#include <iostream>
#include <string>
using namespace std;


void P(string input,string output)
{
    if(input.empty())
    {
        cout<<output<<endl;
        return;
    }
    for(int i=0;i<input.size();i++)
    {
        P(input.substr(0,i)+input.substr(i+1),input.substr(i,1)+output);
    }
    return;
}
void printPermutations(string input){
     P(input,"");
    return;
}