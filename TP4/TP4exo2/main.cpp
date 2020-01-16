#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct Etudiants
{
    string nom;
    string prenom;
    int matricule;
    float module[5];
    float moyenneG;
    int coeff[5];
    int credit;
    bool admission;
};

#define KEY_q 113
float total,totalCoeff;
int N;

int main()
{
    cout << "Combien d'etudiants: \n";
    cin >> N;
    struct Etudiants etudiant[N]; //Vecteur(etudiant) de structure Etudiants

    /*Lecture des données de chaque étudiants*/
    for (int i = 0; i < N; i++)
    {
        cout << i+1 << "...:\n";
        cout << "Etrez le nom de l'etudiant " << i+1 << ": ";
        cin >>etudiant[i].nom;
        cout << "Etrez le prenom de l'etudiant " << i+1 << ": ";
        cin >>etudiant[i].prenom;
        cout << "Etrez le matricule de l'etudiant " << i+1 << ": ";
        cin >>etudiant[i].matricule;
        cout << "Entrez les notes de l'etudiant " << i+1 << ":\n";
        for (int j = 0; j < 5; j++)
        {
            cout << "\t" << j+1 << ". Note: ";
            cin >> etudiant[i].module[j];
            cout << "\t" << j+1 << ". Coefficient: ";
            cin >> etudiant[i].coeff[j];

        }
        cout << "\n";

    }

    /*Calcule du crédit total de chaque étudiant*/
    for (int i = 0; i < N; i++)
    {
        etudiant[i].credit = 0;
        for (int j = 0; j < 5; j++)
        {
            if (etudiant[i].module[j] >= 10)
            {
                etudiant[i].credit += etudiant[i].coeff[j] * 10;
            }
        }

    }

    /*Affichage des credit des etudiants*/
    cout << "Les credits des etudiants: \n";
    for (int i = 0; i < N; i++)
    {
        cout << i+1 << ". Le credit de l\'etudiant " << etudiant[i].nom
        << " " << etudiant[i].prenom << " : "
        << etudiant[i].credit << "\n";
    }


    /*Calcule de la moyenne générale de chaque étudiant*/
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            total += etudiant[i].module[j] * etudiant[i].coeff[j];
            totalCoeff += etudiant[i].coeff[j];
        }
        etudiant[i].moyenneG = total / totalCoeff;
    }

    /*Affichage des moyennes des etudiants*/
    cout << "Les moyennes des etudiants: \n";
    for (int i = 0; i < N; i++)
    {
        cout << i+1 << ". La moyenne de l\'etudiant " << etudiant[i].nom
        << " " << etudiant[i].prenom << " : "
        << etudiant[i].moyenneG << endl;
    }

    /*Les étudiants admis*/
    for (int i = 0; i < N; i++)
    {
        etudiant[i].admission = false;
        if (etudiant[i].moyenneG >= 10 || etudiant[i].credit >= 180)
        {
            etudiant[i].admission = true;
        }
    }

    /*PV Des Etudiants Master ESE*/
    cout << "PV des Etudiants Master ESE: \n";
    for (int i = 0; i < N; i++)
    {
        if (etudiant[i].admission) // if (etudiant[i].admission)
        {
            cout << "   \nL'etudiant " << etudiant[i].nom << " "
            << etudiant[i].prenom << " est: ADMIS"
            << "\nAvec une moyenne de: " << etudiant[i].moyenneG
            << " Et un credit de: " << etudiant[i].credit << endl;
        }
        else
        {
            cout << "   \nL'etudiant " << etudiant[i].nom << " "
            << etudiant[i].prenom << " est: NON ADMIS"
            << "\nAvec une moyenne de: " << etudiant[i].moyenneG
            << " Et un credit de: " << etudiant[i].credit << endl;
        }

    }

    char x;
    int mat;
    while (t)
    {
      x = getch();
      if(x == 'q') break;

      cout << "Entrez le matricule de l\'etudiant: \n";
      cin >> mat;

      for (int i = 0; i < N; i++)
      {
          if (etudiant[i].matricule == mat)
          {
              if (etudiant[i].admission)
              {
                  cout << "   \nL'etudiant " << etudiant[i].nom << " "
                  << etudiant[i].prenom << " est: ADMIS"
                  << "\nAvec une moyenne de: " << etudiant[i].moyenneG
                  << " Et un credit de: " << etudiant[i].credit << endl;
              }
              else
              {
                  cout << "   \nL'etudiant " << etudiant[i].nom << " "
                  << etudiant[i].prenom << " est: NON ADMIS"
                  << "\nAvec une moyenne de: " << etudiant[i].moyenneG
                  << " Et un credit de: " << etudiant[i].credit << endl;
              }
          }

      }


    }


    return 0;
}
