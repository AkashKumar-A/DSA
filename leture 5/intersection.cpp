#include <climits>
#include <algorithm>
void intersection(int *input1, int *input2, int size1, int size2)
{
    sort(input1, input1 + size1);
    for(int i=0; i<size1; ++i){
        int j=0;
        for(; j<size2; ++j){
            if(input1[i] == input2[j]){
                cout << input1[i] << " ";
                input2[j] = INT_MIN;
                break;
            }
        }
    }
}