    #include<bits/stdc++.h>
    int findDuplicate(int *arr, int n)
    {
        //Write your code here
        int sum =0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int sum1=(n-2)*(n-1)/2;
        return sum-sum1;
    }