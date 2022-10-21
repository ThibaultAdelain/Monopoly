#ifndef SPECIALE_H
#define SPECIALE_H

#include "Case.h"
#include "Joueur.h"

class Speciale : public Case {
private :
	int prix;

public :
	Speciale(){nom="", prix=0,suivante=nullptr;}

	Speciale(string nom_, int prix_, Case *suiv_);

	void arreterSur(Joueur joueur){
		cout<<"Vous devez payer "<<prix<<endl;
		joueur.paie(prix);
	}

	int getPrix(){
		return prix;
	}

};

#endif
