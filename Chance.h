#ifndef CHANCE_H
#define CHANCE_H

#include "Case.h"
#include "Joueur.h"

class Chance : public Case {
public :
	Chance(){nom="",suivante=nullptr;}

	Chance(Case *suiv_);

	void arreterSur(Joueur joueur);
};

#endif
