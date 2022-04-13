// input - input array
// size - length of input array
// element - value to be searched
int binarySearch(int array[], int start_index, int end_index, int element){
   while (start_index <= end_index){
      int middle = start_index + (end_index- start_index )/2;
      if (array[middle] == element)
         return middle;
      if (array[middle] < element)
         start_index = middle + 1;
      else
         end_index = middle - 1;
   }
   return -1;
}
int binarySearch(int input[], int size, int element) {
    // Write your code here
	// if(size == 0){
	// return -1;
	// }
    return binarySearch(input,0,size -1,element);
}
