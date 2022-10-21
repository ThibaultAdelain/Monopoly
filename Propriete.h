//
// Created by Thibault Adelain on 18/01/2022.
//

#ifndef MONOPOLY_PROPRIETE_H
#define MONOPOLY_PROPRIETE_H


#include <string>
#include <iostream>
#include "Case.h"
#include "Joueur.h"
using namespace std;

class Propriete : public Case {

protected:
    string nom;
    int loyer;
    int  prixAchat;
    Joueur* proprietaire;
    int nb_maisons=0;
    int prix_maison;
public :

    Propriete();

    Propriete (string n,int L, int prixA, int nb_maisons, int prix_maison, Case* suiv, Joueur* proprietaire= nullptr);

    string getNom();

    void setNom(string nom);

    int getLoyer(){
        return loyer;
    }

    void setLoyer(int loyer){
        this->loyer =loyer;
    }

    int getPrixAchat(){
        return prixAchat;
    }

    void setPrixAchat(int prixAchat){
        this->prixAchat =prixAchat;
    }

    //Prends en entrée le joueur qui tombe sur la case

    virtual void arreterSur(Joueur* J);

    Joueur* getProprietaire() {
            return proprietaire;
    }

    void setProprietaire(Joueur* J) {
        this->proprietaire = J;
    }


    void setNbMaisons(int nb_maisons){
        this->nb_maisons =nb_maisons;
    }

    int getNbMaisons(){
        return nb_maisons;
    }

    void setPrixMaison(int prixMaison){
        this->prix_maison = prixMaison;
    }

    int getPrixMaison(){
        return prix_maison;
    }
};


#endif //MONOPOLY_PROPRIETE_H
