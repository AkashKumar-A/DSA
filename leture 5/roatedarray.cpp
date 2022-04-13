void rotate(int *input, int d, int n)
{
    //Write your code here
     int arr[n];
        int j =0;
        for(int i = d;i<n;i++){
            arr[j]=input[i];
            j++;
        }
        for(int i = 0; i<d;i++){
            arr[j]=input[i];
            j++;
        }
        for(int i = 0; i<n;i++){
            input[i] = arr[i];
        }
}