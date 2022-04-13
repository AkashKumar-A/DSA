/*
Fractionner le tableau
Envoyer des commentaires
Vous avez cr�� une application pour smartphone et souhaitez d�finir son prix d'abonnement de mani�re � maximiser le profit r�alis�. Certains utilisateurs ne s'abonneront � votre application que si leur budget est sup�rieur ou �gal � votre prix.
Vous recevrez une liste de taille N ayant des budgets d'abonn�s et vous devez retourner le profit maximum que vous pouvez gagner.
Disons que vous d�cidez que le prix de votre application est Rs. x et il y a N nombre d'abonn�s. Donc le profit maximum que vous pouvez gagner est de :
 m * x
o� m est le nombre total d'abonn�s dont le budget est sup�rieur ou �gal � x.
Format d'entr�e :
Line 1 : N (No. of subscribers)
Line 2 : Budget of subscribers (separated by space)
Format de sortie :
 Maximum profit
Contraintes :
1 <= N <= 10^6
1 <=budget[i]<=9999
Exemple d'entr�e 1 :
4
30 20 53 14
Exemple de sortie 1 :
60
Exemple de sortie 1 Explication :
Le prix de votre application doit �tre de Rs. 20 ou Rs. 30. Pour les deux prix, vous pouvez obtenir le profit Rs. 60.
Exemple d'entr�e 2 :
5
34 78 90 15 67
Exemple de sortie 2 :
201
Exemple de sortie 2 Explication :
Le prix de votre application doit �tre de Rs. 67. Vous pouvez obtenir le profit Rs. 201 (soit 3 * 67).
*/

#include<bits/stdc++.h>
int maximumProfit(int budget[], int n) {
    sort(budget,budget+n);
    int *cost = new int[n];
    for(int i = 0; i <n ; i++){ 
    	cost[i] = budget[i] * (n-i);
    }
    int max=0;
    for(int i = 0; i <n ; i++){ 
    	if(cost[i]>max){
    		max = cost[i];
    	}
    }
    return max;
}

#include <iostream>
using namespace std;
#include "solution.h"

int main() {
    int n ,*input,i,*cost;
    cin>>n;
    input = new int[n];
    for(i = 0;i < n;i++)
        cin>>input[i];
    
    cout << maximumProfit(input, n) << endl;
    
}


