int arrayRotateCheck(int *input, int size)
{
    //Write your code here
//     for(int i=0;i<size;i++){
//         if(input[i]>input[i+1])
//             return i+1;
//     }
//     return 0;
// }
// element
    int min = input[0], min_index=0;
    for (int i=0; i<size; i++)
    {
        if (min > input[i])
        {
            min = input[i];
            min_index = i;
        }
    }
    return min_index;
}