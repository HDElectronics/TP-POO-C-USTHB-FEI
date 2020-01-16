#include <iostream>

using namespace std;

/*****************
Declaration de la structure article */
struct article
{
    string nom;
    int quantite;
    float prix;
};

int quantiteAchetA1,quantiteAchetA2;
float prixApayerA1,prixApayerA2,
prixLivraisonA1,prixLivraisonA2;


int main()
{
    /*******************************
    Construction de deux memebre de
    la structure article A1 et A2 */
    article A1;
    article A2;

    /*********************************************************************************
    Initialisation des variables de la structure article A1*/
    cout << "Saisissez le nom de l'article 1: ";
    cin >> A1.nom;
    cout << " \nSaisissez la quantite de l'article 1: ";
    cin >> A1.quantite;
    cout << " \nSaisissez le prix de l'article 1: ";
    cin >> A1.prix;

    /*********************************************************************************
    Initialisation des variables de la structure arcticle A2*/
    cout << " \n\nSaisissez le nom de l'article 2: ";
    cin >> A2.nom;
    cout << " \nSaisissez la quantite de l'article 2: ";
    cin >> A2.quantite;
    cout << " \nSaisissez le prix de l'article 2: ";
    cin >> A2.prix;

    /*********************************************************************************
    Affichage des variables*/
    cout << "\n\n" << A1.nom << "  " << A1.prix << " DZD/unite" << "  " << A1.quantite << " Unite en stock";
    cout << "\n" << A2.nom << "  " << A2.prix << " DZD/unite" << "  " << A2.quantite << " Unite en stock";

    /*********************************************************************************
    L'article le moins cher*/
    if(A1.prix > A2.prix) {
        cout << " \n\n" << A2.nom << " est moins cher que " << A1.nom << endl
        << A2.nom << " " << A2.prix <<" DZD" << "    " << A1.nom << " " << A1.prix << " DZD";
    }
    else
    {
        cout << " \n\n" << A1.nom << " est moins cher que " << A2.nom << endl
        << A1.nom << " " << A1.prix <<" DZD" << "    " << A2.nom << " " << A2.prix << " DZD";
    }

    /*********************************************************************************
    Quantité à acheter*/
    cout << " \n\nCombien d'unite de " << A1.nom << " voulez-vous acheter ?... ";
    cin >> quantiteAchetA1;
    cout << " \n\nCombien d'unite de " << A2.nom << " voulez-vous acheter ?... ";
    cin >> quantiteAchetA2;

    /*********************************************************************************
    Test si la quantité est disponible*/
    if (A1.quantite - x <= 0)
    {
        cout << " \n\n" << A1.nom <<" est en rupture de stock";
        return 0;
    }
    /**********/
    if (A2.quantite - y <= 0)
    {
        cout << " \n\n" << A2.nom <<" est en rupture de stock";
        return 0;
    }

    /*********************************************************************************
    Promotion d'achat de plus de 50 unités*/
    if (quantiteAchetA1 > 50 || quantiteAchetA2 > 50)
    {
        prixApayerA1 = A1.prix * quantiteAchetA1 * 0.15;
        prixApayerA2 = A2.prix * quantiteAchetA2 * 0.07;
    }
    else
    {
        prixApayerA1 = A1.prix * quantiteAchetA1;
        prixApayerA2 = A2.prix * quantiteAchetA2;
    }

    /*********************************************************************************
    Prix à payer*/
    cout << " \n\nVous devez payer: " << prixApayerA1 << " DZD" << "   pour les " << A1.nom
    << " \n\net " << prixApayerA2 <<" DZD" << "   pour les " << A2.nom;

    /*********************************************************************************
    Prix de livraison*/
    prixLivraisonA1 = A1.prix*quantiteAchetA1*0.07;
    prixLivraisonA2 = A2.prix*quantiteAchetA2*0.07;

    /*********************************************************************************
    Prix de livraison totale*/
    cout << " \n\nLe prix de la livraison des articles va vous couter: "
    << prixLivraisonA1 + prixLivraisonA2 << " DZD";

    /*********************************************************************************
    Prix totale à payer*/
    cout << " \n\n Au totale vous devez payer: "
    << prixApayerA1 + prixApayerA2 + prixLivraisonA1 + prixLivraisonA2 << " DZD" <<"\n\n";
    /**********************************************************************************/
    return 0;
}
