#ifndef PLATEAU_H
#define PLATEAU_H

#include <iostream>
#include <fstream>
using namespace std;
using std::stoi;
using std::string;

#include "De.h"
#include "Gobelet.h"
#include "Communaute.h"
#include "Chance.h"
#include "Depart.h"
#include "Case.h"
#include "Pion.h"
#include "Joueur.h"
#include "Gare.h"
#include "Propriete.h"
#include "Speciale.h"
#include "AllerEnPrison.h"
#include "ParcGratuit.h"
#include "Prison.h"
#include "Compagnie.h"

class Plateau {

private :
	Case* listCase [40];

	Propriete tabPropriete [40];
	Gare tabGare [40];
	Speciale tabSpeciale [40];
	Compagnie tabCompagnie[40];
	Communaute tabCommunaute[40];
	Chance tabChance[40];

public :

	Plateau();

	void creerPlateau();

	Case** list(){
		return listCase;
	}
};

#endif
