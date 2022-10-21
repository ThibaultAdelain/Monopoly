//
// Created by Thibault Adelain on 29/12/2021.
//

#ifndef MONOPOLY_CASE_H
#define MONOPOLY_CASE_H

#include "iostream"

using namespace std;

class Case {

protected:
    string nom;
    Case *suivante;
public:

    Case();
    Case(string nom, Case *suiv);


    void setNom(string nom) {
        this-> nom = nom;
    }
    string getNom() {
        return nom;
    }

    void setSuivante(Case *suiv) {
        this-> suivante = suiv;
    }

    Case* getSuivante() {
        return suivante;
    }

    void setCase(string nom, Case *suiv) {
        this-> nom = nom;
        this-> suivante = suiv;
    }

    virtual void arreterSur() {
        string a = "nothing";
        cout << a << endl;
    };
};


#endif //MONOPOLY_CASE_H
