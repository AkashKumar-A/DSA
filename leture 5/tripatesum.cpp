#include<bits/stdc++.h>
int tripletSum(int *arr, int n, int num)
{
	//Write your code here
       int count=0;
      sort(arr,arr+n);
		for(int i=0; i<n-1; i++)
		{
            int j = i + 1;
            int k = n-1;
            while(j<k){
                
                
         if(arr[i]+arr[j]+arr[k] < num)
             j++;
        else if(arr[i]+arr[j]+arr[k] > num)
            k--;
         else
         {
             
             if(arr[j]==arr[k]){
                 
              int m=k-j+1;   
                 count+= (m*(m-1))/2; 
                 break;
             }
             
          int start=j+1;  
          int  end=k-1;
            
        while(start<=end && arr[j]==arr[start])
             start++;
             
          while(end>=start &&arr[k]==arr[end])
              end--;
             
            int f1= start-j;
             int f2=k-end;
             count+=f1*f2;
             
             j=start;
             k=end;
             
         }
               
            }
			
            
		}
		return count; 
}