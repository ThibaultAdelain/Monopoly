//
// Created by Thibault Adelain on 29/12/2021.
//

#include "Pion.h"


using namespace std;

Pion::Pion() {
    nom = "";
}

Pion::Pion(Case pos, string nom) {
    this-> position = pos;
    this-> nom = nom;
}

ostream& operator<<(ostream& s, Pion p) {
    s <<  "Nom : " << p.getNom() << " ; Position : " << p.getPosition().getNom() << " ; Suivante : "
      << p.getPosition().getSuivante()->getNom() << endl;
    return s;
};


bool Pion::deplacer(Gobelet gobelet) {
    bool drapeau = false;
    int valeur = gobelet.getValeur();
    for (int i = 0; i < valeur ; i++) {
    setPosition(position.getSuivante());
        if (position.getNom() == "départ") {
            drapeau = true;
        }
    }
    //cout << "lieu : " << position.getNom() << " ; Suivante : " << position.getSuivante()->getNom() << endl;
    return drapeau;
}




