#include<iostream>
using namespace std;
double geometricSum(int k) {
    // Write your code here
   if(k==0)
        return 1;
    else{
    double sump= (1/(pow(2,k)));
    return geometricSum(k-1)+sump;
    }
   
}


/*1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) */