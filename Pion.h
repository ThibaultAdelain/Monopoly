//
// Created by Thibault Adelain on 29/12/2021.
//

#ifndef MONOPOLY_PION_H
#define MONOPOLY_PION_H

#include "iostream"
#include "Gobelet.h"
#include "Case.h"
using namespace std;

class Pion {

protected:
    Case position;
    string nom;

public:
    Pion();
    Pion(Case position, string nom);

    bool deplacer(Gobelet gobelet);

    friend ostream& operator<<(ostream& s, Pion p);

    void setPosition(Case *pos) {
        position.setCase(pos->getNom(), pos->getSuivante());
    }

    Case getPosition() {
        return position;
    }

    void setPion(Case pos, string nom) {
        this-> position = pos;
        this-> nom = nom;
    }
    string getNom() {
        return nom;
    }
};


#endif //MONOPOLY_PION_H
