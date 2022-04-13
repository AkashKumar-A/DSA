#include <iostream>
#include <string>
#include "solution.h"
using namespace std;



#include <string>
using namespace std;
  string X[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    if(num==0){
        output[0]="";
        return 1;
    }
    
    int smallOutputSize=keypad(num/10,output);
    
      int r=num%10;
    string temp[10000];
    int k=0;
     for(int i=0;i<smallOutputSize;i++){
         
          for(int j=0;j<X[r].size();j++){
              temp[k]=output[i]+X[r][j];
              k++;
        }
    }
    for(int i=0;i<k;i++){
        output[i]=temp[i];
    }
    return k;
}







int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
