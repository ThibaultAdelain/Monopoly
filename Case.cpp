//
// Created by Thibault Adelain on 29/12/2021.
//

#include "Case.h"
#include "iostream"

using namespace std;

Case::Case() {
    nom = "";
    suivante = nullptr;
}

Case::Case(string nom, Case *suiv) {
    this-> nom = nom;
    this->suivante = suiv;
}


