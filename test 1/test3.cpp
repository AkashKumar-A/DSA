/*
Fractionner le tableau
Envoyer des commentaires
Étant donné un tableau d'entiers A de taille N, vérifiez si le tableau d'entrée peut être divisé en deux parties telles que -
- Sum of both parts is equal
- All elements in the input, which are divisible by 5 should be in same group.
- All elements in the input, which are divisible by 3 (but not divisible by 5) should be in other group.
- Elements which are neither divisible by 5 nor by 3, can be put in any group.
Les groupes peuvent être créés avec n'importe quel ensemble d'éléments, c'est-à-dire que les éléments n'ont pas besoin d'être continus. Et vous devez considérer chaque élément du tableau d'entrée dans un groupe.
Renvoie vrai, si le tableau peut être divisé selon les règles ci-dessus, sinon renvoie faux.
Remarque : Vous n'obtiendrez des points que si tous les cas de test sont réussis.
Format d'entrée :
Line 1 : Integer N (size of array)
Line 2 : Array A elements (separated by space)
Format de sortie :
true or false
Contraintes :
1 <= N <= 50
Exemple d'entrée 1 :
2
1 2
Exemple de sortie 1 :
false
Exemple d'entrée 2 :
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


















