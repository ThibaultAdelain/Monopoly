#ifndef PRISON_H
#define PRISON_H

#include "Case.h"
#include "Joueur.h"

class Prison : public Case {
public :

	Prison(Case *suiv_);

	void arreterSur(Joueur joueur){
		cout<<"Tu es sur la case prison"<<endl;
	}

};

#endif
