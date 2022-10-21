#ifndef COMMUNAUTE_H
#define COMMUNAUTE_H

#include "Case.h"
#include "Joueur.h"

class Communaute : public Case {
private :

public :

	Communaute(){nom="",suivante=nullptr;}

	Communaute(Case *suiv_);

	void arreterSur(Joueur joueur);
};

#endif
