#include "Gobelet.h"

Gobelet::Gobelet(int nbFaces){
	de1 = De(nbFaces);
	de2 = De(nbFaces);
	valeur = 0;
	nb_doubles = 0;
}

int Gobelet::getnb_doubles(){
	return nb_doubles;
}

void Gobelet::setnb_doubles(int newnb_doubles){
	nb_doubles = newnb_doubles;
}

bool Gobelet::isDouble(){
	return de1.getValeur()==de2.getValeur();
}

int Gobelet::getValeur(){
	return valeur;
}

void Gobelet::genererValeur(){
	de1.genererValeur();
	cout<<" la valeur de d1 est "<<de1.getValeur()<<endl;
	de2.genererValeur();
	cout<<" la valeur de d2 est "<<de2.getValeur()<<endl;
	valeur = de1.getValeur() + de2.getValeur();
}
