
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    double x1,y1,x2,y2,d;
    cout<<"Entrez la premiere position"<<endl<<"x1= ";
    cin>>x1;cout<<"y1= "; cin>>y1;
    cout<<"Entrez la deuxieme position"<<endl<<"x2= ";
    cin>>x2;cout<<"y2= ";cin>>y2;
    d=sqrt(pow(y2-y1,2)+pow(x2-x1,2));
    cout<<"La distance est: "<<d;
    return 0;
}

/*
#include <iostream>
#include <cmath>

using namespace std;

double distance(){
    double x1,y1,x2,y2,d;
    cout<<"Entrez la premiere position"<<endl<<"x1= ";
    cin>>x1;cout<<"y1= "; cin>>y1;
    cout<<"Entrez la deuxieme position"<<endl<<"x2= ";
    cin>>x2;cout<<"y2= ";cin>>y2;

return sqrt(pow(y2-y1,2)+pow(x2-x1,2));
}

int main()
{
    cout<<"La distance est: "<<distance();
    return 0;
}
*/
