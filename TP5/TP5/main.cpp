#include <iostream>

using namespace std;

class Robot{

private:
    float vitesse;

public:

    void afficheV(){
        if (vitesse < 2){
            cout << "\nLe robot est lent";
        }
        else {
            cout << "\nLe robot est rapide";
        }
    }

    void affectV(float newV);

    Robot(){
        vitesse = 0;
    }

    ~Robot(){
        cout << "\n\nRobot mort" << endl;
    }
};

void Robot::affectV(float newV){
    vitesse = newV;
}

int main()
{
    Robot B21r;
    cout << "Entrez la vitesse : ";
    float newV;
    cin >> newV;
    B21r.affectV(newV);
    B21r.afficheV();
    return 0;
}

/* PARTIE 1:
1/. Console : 2
2/. Ce programme affiche la valeur de la variable vitesse (2).
3/. cin >> B21r.vitesse;
4/. La valeur de vitesse ne peut pas etre modifi� de l'exterieur de la classe Robot
    elle est dans private (encapsul�)
*/
/* PARTIE 2:
1/. void affectV(float newV){vitesse=newV;}
2/. Le programme refonctionne, cette m�thode permet d'acc�der � la variable vitesse
    de la classe Robot dans private (encapsul�es).
*/
/* PARTIE 3:
1/. Sur programme.
2/. Le constructeur est une fonction membre de la classe Robot qui porte le meme
    nom que la classe elle s'ex�cute � la cr�ation d'un objet de la classe Robot.
    Le destructeur est une fonction membre de la classe Robot qui port le meme
    nom que la classe suivie d'un ~ elle s'ex�cute lors ce qu'on quitte le bloc
    ou a �t� d�clarer l'objet.
3/. Sur programme.
*/
