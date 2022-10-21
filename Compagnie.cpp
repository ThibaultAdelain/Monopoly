#include "Compagnie.h"
#include <iostream>
#include <string>

using namespace std;


Compagnie::Compagnie(string n, Case* suiv ) : Propriete (n ,  0, 150, suiv)
{
    nom = n;
    proprietaire =Joueur();
    suivante= suiv;
}
/*void Compagnie::arreterSur() const {
    cout << "Vous etes arreté sur une compagnie " << nom << endl;
}*/
