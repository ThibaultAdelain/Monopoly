#ifndef COMPAGNIE_H
#define COMPAGNIE_H

#include "Propriete.h"


class Compagnie : public Propriete {

public :

	Compagnie(){nom="", loyer=0,prixAchat=0,suivante=nullptr;}

	Compagnie(string nom_, Case *suiv_);

    //void arreterSur() const;
};

#endif
