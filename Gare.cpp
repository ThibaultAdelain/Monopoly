//
// Created by ASUS on 04/01/2022.
//


#include "Gare.h"
#include <iostream>
#include <string>

using namespace std;


Gare::Gare(string n, Case* suiv ) : Propriete (n ,  0, 200, suiv){}
void Gare::arreterSur(Joueur joueur) const {

    cout << "Vous etes arreté sur la gare " << nom << endl;
}
