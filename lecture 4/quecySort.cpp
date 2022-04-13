#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp=*b;
    *b=*a;
    *a=temp;
}
int partition(int input[],int start , int end){
    
    int count=0;
    for(int i=start+1;i<=end;i++)
    {
        if(input[start]>=input[i])
            count++;
    }
    int pi=start+count;
    swap(&input[start],&input[pi]);
    int i=start,j=end;
    while(i<=j)
    {
        if(input[i]<=input[pi])
            i++;
        else if(input[j]>input[pi])
            j--;
        else
            swap(&input[i],&input[j]);
    }    
    return pi;
}

void qSort(int input[], int start,int end) {
    if(start>=end){
        return ;
    }
    int pivot  = partition(input,start,end);
    qSort(input, start,pivot-1);
    qSort(input, pivot+1,end);


}
void quickSort(int input[], int size)
{
     if(size==0 || size==1)
        return;
    qSort(input, 0, size - 1);
}