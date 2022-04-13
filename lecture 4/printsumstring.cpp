#include <string.h>
using namespace std;


int atoi(char a)
{
    int i=a-'0';
    return i;
}
char itoa(int i)
{
    char c='a'+i-1;
    return c;}

void P(string input,string output){
    if(input.empty())
    {
        cout<<output<<endl;
        return;
    }
    P(input.substr(1),output+itoa(atoi(input[0])));
    int f=atoi(input[0]);
    int s=atoi(input[1]);
    int fs=s+(f*10);
    if(fs>10&&fs<=26)
    P(input.substr(2),output+itoa(fs));
    return;
}


void printAllPossibleCodes(string input) {
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */
    P(input,"");
    return;
}