#include "De.h"

De :: De(int nbFaces_){
	nbFaces = nbFaces_;
	valeur = 0;
}


int De :: getNbfaces(){
	return nbFaces;
}

int De::getValeur(){
	return valeur;
}

// ATTENTION
// générerValeur = 2 ?

void De :: genererValeur(){
	valeur = rand() % nbFaces + 1;
}
