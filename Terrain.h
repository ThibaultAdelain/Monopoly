//
// Created by Thibault Adelain on 18/01/2022.
//

#ifndef MONOPOLY_TERRAIN_H
#define MONOPOLY_TERRAIN_H

#include "iostream"
#include "Propriete.h"
using namespace std;


class Terrain : public Propriete {

protected:
public :

    Terrain();

    Terrain (string n,int L, int prixA, int nb_maisons, int prix_maison, Case* suiv, Joueur* proprietaire= nullptr);

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

    void arreterSur(Joueur* J);

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


#endif //MONOPOLY_TERRAIN_H
