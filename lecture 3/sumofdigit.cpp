int sumOfDigits(int n){
    // write code here
	if(n==0){
        return 0;
    }
    else{
		return n%10+sumOfDigits(n/10);
    }
    
    
}

