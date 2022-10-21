//
// Created by Thibault Adelain on 29/12/2021.
//

#include "Joueur.h"
#include "Propriete.h"
#include "Terrain.h"

Joueur::Joueur() {
    nom = "";
    pion = nullptr;
    solde = 0;
}

Joueur::Joueur(string nom, Pion *pion, int solde) {
    this-> nom = nom;
    this-> pion = pion;
    this-> solde = solde;
}


void Joueur::gagner(Joueur j2, int paiement) {
    j2.solde -= paiement;
    this -> solde += paiement;
}

void Joueur::perdre(Joueur j2, int paiement) {
    j2.solde += paiement;
    this -> solde -= paiement;
}

ostream& operator<<(ostream& s, Joueur j) {
    s << "Nom : " << j.nom << " ; Pion : " << j.pion->getNom() << " ; solde : " << j.solde << " euros"
    << " ; position : " << j.pion->getPosition().getNom() << endl;
    return s;
}

void Joueur::jouer(Gobelet gobelet) {
    bool case_depart = pion->deplacer(gobelet);
    if (case_depart)
        solde += 200;

    Case position_arrivee = pion->getPosition();
    position_arrivee.arreterSur();

}