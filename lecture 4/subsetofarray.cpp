/***
You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 2}, then output should contain 
	{{0}, 		// Length of this subset is 0
	{1, 2},		// Length of this subset is 1
	{1, 1},		// Length of this subset is also 1
	{2, 1, 2}}	// Length of this subset is 2

Don’t print the subsets, just save them in output.
***/

int subset(int input[], int n, int output[][20]) {
    if(n == 0){
        output[0][0] = 0; 
        return 1; 
    }
    int smallAns = subset(input+1, n-1, output); 
    for(int i = 0; i < smallAns; i++){
        int numOfElements = output[i][0]; 
        output[i+smallAns][1] = input[0]; 
        output[i+smallAns][0] = numOfElements+1; 
        
        for(int j = 1; j <= numOfElements; j++){
            output[i+smallAns][j+1] = output[i][j]; 
        }
        
    }
    return 2*smallAns; 
}


/*

output = [[0], [1, 20], [1, 12], [2, 20, 12], 
			[1, 15], [2,15, 20], [2,15, 12], [3,15, 20, 12]]

*/



