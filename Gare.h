//
// Created by ASUS on 04/01/2022.
//

#ifndef UNTITLED1_GARE_H
#define UNTITLED1_GARE_H

#include "Propriete.h"
#include <string>
#include <iostream>
using namespace std;

class Gare : public Propriete {

public :
	Gare(){nom="",loyer=0,prixAchat=0,proprietaire= nullptr,suivante=nullptr;}

    Gare(string nom, Case* suiv);

    void arreterSur(Joueur joueur) const;
};
#endif //UNTITLED1_GARE_H
