//
// Created by Thibault Adelain on 29/12/2021.
//

#ifndef MONOPOLY_JOUEUR_H
#define MONOPOLY_JOUEUR_H

#include "iostream"
#include "Pion.h"

using namespace std;


class Joueur {

protected:
    string nom;
    Pion* pion;
    int solde;
public:
    Joueur();
    Joueur(string nom, Pion *pion, int solde);
    void operation();
    void jouer(Gobelet gobelet);
    void gagner(Joueur j2, int paiement);
    void perdre(Joueur j2, int paiement);

    friend ostream& operator<<(ostream& s, Joueur j);

    string getNom(){
        return nom;
    }
    void setPion(Pion *pion) {
        this->pion = pion;
    }
    Pion* getPion(){
        return pion;
    }
    void setSolde(int solde) {
        this->solde = solde;
    }
    int getSolde(){
        return solde;
    }

    void paie(int somme) {
        this->solde = solde - somme;
    }
    void gagne(int somme) {
        this->solde = solde + somme;
    }
};


#endif //MONOPOLY_JOUEUR_H
