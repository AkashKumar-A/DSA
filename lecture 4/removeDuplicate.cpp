#include<cstring>
void removeConsecutiveDuplicates(char *input) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.    
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/
	if(strlen(input)==0){
        return ;
    }
    removeConsecutiveDuplicates(input+1);
    if(input[0]==input[1]){
        int i;
        for( i=1;i<strlen(input);i++){
            input[i-1]=input[i];
        }
        input[i-1]='\0';
    }
   

}