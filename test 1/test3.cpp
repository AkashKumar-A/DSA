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
// bool checksequenece(char large[] , char*small) {

// }
bool checksequenece(char large[] , char*small) {
    if(small[0]=='\0'&&large[0]!='\0')
                return true;
    else if(small[0]!='\0'&&large[0]=='\0')
        return false;


          else if(large[0]=='\0'&&small[0]=='\0')
            return true;


        int i=0;
        for(;large[i]!='\0';i++)
        {
            if(large[i]==small[0])
            {
                break;
            }
        }
        if(large[i]=='\0')
            return false;

    return checksequenece(large+i+1,small+1);

}
#include<iostream>
using namespace std;
#include "solution.h"

int main()
{
	char large[10000];
	char small[10000];
	cin>>large;
	cin>>small;
	bool x=checksequenece(large , small);

	if(x)
		cout<<"true";
	else
		cout<<"false";

}


















