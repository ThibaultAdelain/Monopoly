#ifndef DE_H
#define DE_H

#include <iostream>
#include <math.h>
#include <string>
#include <random>
#include <ctime>

using namespace std;

class De {
protected :
	int nbFaces;
	int valeur;


public :

	De(int nbFaces_);

	int getNbfaces();

	int getValeur();

	void genererValeur();

};

#endif
