/******************************************************************************
///////////////////////////// TP3 POO Exercice 1                              *
////////////// Sous-Groupe: 1                                                 *
//// Nom:		KHADRAOUI			//// Nom:		BELBEKOUCH                *
//// Prénome:	Ibrahim 		    //// Prénom:	Tewfik                    *
//// Matricule: 201400000314  		//// Matricule: 201500010212              *
*******************************************************************************/

#include <iostream>

using namespace std;

//Déclaration des variables:
int T[30];
int N,i,minimal,jour,val,L,j,mini,maxi,c;
float somme=0;
////////////////////////////


//Déclaration des fonctions
void lecture();
float moyenne();
int jourPlusFroid();
void tri_croi();
void tri_dec();
void affichage();
///////////////////////////

//Fonction principale (main function):
int main()
{
    lecture();
    affichage();
    return 0;
}
/////////////////////////////////////////////////////////////////////////////


//Définition des fonctions:
void lecture(){
    cout<<"veuillez entrer le nombre de jours: ";
    cin>>N;
    for(i=0; i<N; i++){
        cout<<i+1<<". ";
        cin >> val;
        if(val == 11111) i-=2;
        else T[i]=val;
    }
}

float moyenne(){
    for(i=0; i<N; i++){
        somme+=T[i]; //somme = somme + T[i]
    }
    return somme/N;
}

int jourPlusFroid(){
    minimal=T[0];
    for(i=0;i<N;i++){
        if(T[i]<minimal)
            {minimal=T[i];
            jour=i;
            }
    }
    return jour+1;
}
////////////////////////////////////////////



void tri_croi ()
{
    float min,c;
    int l;
      for(int i=0;i<(N-1)/2;i++)
      {
          min=T[i];
          l=i;
           for(int j=i;j<(N/2);j++)
           {
               if(T[j]<min)
               {
                   min=T[j];
                   l=j;
               }
           }
           c=T[i];
           T[i]=T[l];
           T[l]=c;
      }
}
void tri_dec ()
{
    float max,c;
    int l;
      for(int i=(N)/2;i<N-1;i++)
      {
          max=T[i];
          l=i;
           for(int j=i;j<N;j++)
           {
               if(T[j]>max)
               {
                   max=T[j];
                   l=j;
               }
           }
           c=T[i];
           T[i]=T[l];
           T[l]=c;
      }
}


void affichage(){
    cout << "\n La temperature moyenne est de: " << moyenne()<<endl;
    cout << "\n Le jours le plus froid est le: " << jourPlusFroid() << ", ";
    cout << "\n Avec une Temperature de: " << T[jourPlusFroid()-1] << endl;

    tri_dec();
    tri_croi();

    cout << "\n Le trie: "<<endl;

    for(i=0;i<N;i++){
        cout <<  T[i] <<"   " ;
    }

}
