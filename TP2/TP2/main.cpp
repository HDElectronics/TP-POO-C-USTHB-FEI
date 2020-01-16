#include <iostream>
using namespace std;

float tableau_temperature[31];
float somme,moyenne;
int N,i;

int main()
{
	cout << "Nombre de jours: ";cin >> N;

	for(i=1 ; i>N+1 ; i++) {
    	cout <<i<<"= "<<endl;
    	cin >> tableau_temperature[i-1];
    	somme+=tableau_temperature[i-1];
	}

	moyenne=somme/N;
	cout << "Moyenne = "<<moyenne;

	return 0;
}
