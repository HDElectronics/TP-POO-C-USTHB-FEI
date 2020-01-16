/******************************************************************************
///////////////////////////// TP3 POO Exercice 2                              *
////////////// Sous-Groupe: 1                                                 *
//// Nom:		KHADRAOUI			//// Nom:		BELBEKOUCH                *
//// Prénome:	Ibrahim 		    //// Prénom:	Tewfik                    *
//// Matricule: 201400000314  		//// Matricule: 201500010212              *
*******************************************************************************/

#include <iostream>

using namespace std;

int A[10][10];
int B[10][10];
int P[10][10];
int C[10][10];
int R[10][10];
int DimMatrice,i,j,k;

void lire();
void produit();
void somme();
void affichage();



int main ()
{
    lire();
    produit();
    somme();
    affichage();
    return 0;
}


void lire(){
    cout << "Entrez le nombre de ligne et cologne des matrice A,B,C: ";
    cin >> DimMatrice;

    cout << "Entrez les elements de la matrice A: " << endl ;
    for (i = 0; i < DimMatrice; i++)
        for (j = 0; j < DimMatrice; j++)
            cin >> A[i][j];

    cout << "Entrez les elements de la matrice B: " << endl ;
    for (i = 0; i < DimMatrice; i++)
        for (j = 0; j < DimMatrice; j++)
            cin >> B[i][j];

    cout << "Entrez les elements de la matrice C: " << endl ;
    for (i = 0; i < DimMatrice; i++)
        for (j = 0; j < DimMatrice; j++)
            cin >> C[i][j];
}

void produit(){
for (i = 0; i < DimMatrice; i++)
    {
        for (j = 0; j < DimMatrice; j++)
        {
            P[i][j] = 0;
            for (k = 0; k < DimMatrice; k++)
            {
                P[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void somme(){
for(i = 0; i < DimMatrice; ++i)
        for(j = 0; j < DimMatrice; ++j)
            R[i][j] = P[i][j] + C[i][j];
}

void affichage(){

cout << "----------------------"<<endl;

cout << "A x B = \n";
    for (i = 0; i < DimMatrice; i++)
    {
        for (j = 0; j < DimMatrice; j++)
            cout << P[i][j] << "  ";
        cout << "\n";
    }

cout << "----------------------"<<endl;

cout << "A x B + C = \n";
    for (i = 0; i < DimMatrice; i++)
    {
        for (j = 0; j < DimMatrice; j++)
            cout << R[i][j] << "  ";
        cout << "\n";
    }
}
