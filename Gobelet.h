#ifndef Gobelet_H
#define Gobelet_H

#include <iostream>
#include <math.h>
#include <string>
#include "De.h"

using namespace std;

class Gobelet {
protected :
	De de1 = De(6); 	//dé à 6 faces par défaut
	De de2 = De(6);
	int valeur;
	int nb_doubles;		//Au bout de trois doubles, c'est direction la prison

public :

	Gobelet(int nbFaces);

	int getnb_doubles();

	void setnb_doubles(int newnb_double);

	bool isDouble();

	int getValeur();

	void genererValeur();

};

#endif
