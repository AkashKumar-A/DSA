#include<iostream>
#include "Solution.h"
using namespace std;
bool checkNumber(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     /*khk * /
     Taking input and printing output is handled automatically.
  */
    if(size==0){
        return false;
    }
    if(input[0]==x){
        return true;
    }
    bool ans = checkNumber(input+1,size-1,x);
    return ans;
    
    
}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    if(checkNumber(input, n, x)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}


