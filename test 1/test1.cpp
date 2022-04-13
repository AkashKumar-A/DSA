/*
Fractionner le tableau
Envoyer des commentaires
�tant donn� un tableau d'entiers A de taille N, v�rifiez si le tableau d'entr�e peut �tre divis� en deux parties telles que -
- Sum of both parts is equal
- All elements in the input, which are divisible by 5 should be in same group.
- All elements in the input, which are divisible by 3 (but not divisible by 5) should be in other group.
- Elements which are neither divisible by 5 nor by 3, can be put in any group.
Les groupes peuvent �tre cr��s avec n'importe quel ensemble d'�l�ments, c'est-�-dire que les �l�ments n'ont pas besoin d'�tre continus. Et vous devez consid�rer chaque �l�ment du tableau d'entr�e dans un groupe.
Renvoie vrai, si le tableau peut �tre divis� selon les r�gles ci-dessus, sinon renvoie faux.
Remarque : Vous n'obtiendrez des points que si tous les cas de test sont r�ussis.
Format d'entr�e :
Line 1 : Integer N (size of array)
Line 2 : Array A elements (separated by space)
Format de sortie :
true or false
Contraintes :
1 <= N <= 50
Exemple d'entr�e 1 :
2
1 2
Exemple de sortie 1 :
false
Exemple d'entr�e 2 :
3
1 4 3
Exemple de sortie 2 :
true
*/




#include <iostream>
#include "solution.h"
using namespace std;




// bool splitArray(int *input, int size) {
//     /* Don't write main().
//      * Don't read input, it is passed as function argument.
//      * Return output and don't print it.
//      * Taking input and printing output is handled automatically.
//      */
    
// }
bool helper(int* arr, int n, int start, int lsum, int rsum) 
{ 
  
    // If reached the end 
    if (start == n) 
        return lsum == rsum; 
  
    // If divisible by 5 then add to the left sum 
    if (arr[start] % 5 == 0) 
        lsum += arr[start]; 
  
    // If divisible by 3 but not by 5 
    // then add to the right sum 
    else if (arr[start] % 3 == 0) 
        rsum += arr[start]; 
  
    // Else it can be added to any of the sub-arrays 
    else
  
        // Try adding in both the sub-arrays (one by one) 
        // and check whether the condition satisfies 
        return helper(arr, n, start + 1, lsum + arr[start], rsum) 
           || helper(arr, n, start + 1, lsum, rsum + arr[start]); 
  
    // For cases when element is multiple of 3 or 5. 
    return helper(arr, n, start + 1, lsum, rsum); 
} 
  
// Function to start the recursive calls 
bool splitArray(int* arr, int n) 
{ 
    // Initially start, lsum and rsum will all be 0 
    return helper(arr, n, 0, 0, 0); 
}














int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
    if(splitArray(input, size)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

	
	return 0;

}
