#ifndef PLATEAU_CPP
#define PLATEAU_CPP

#include "Plateau.h"



Plateau::Plateau (){}

void Plateau::creerPlateau(){
	ifstream listeCase("/Users/thibault/Desktop/Centrale Marseille/2A/Électif/E1-C++/C++/Monopoly/ListeCase.txt");

	Depart depart = Depart();
	listCase[0] = &depart; //On initialise la derniere case, pour construire le reste

	// initialisation des variables utiles dans la boucle while
	Prison prison (listCase[11]);
	ParcGratuit parcGratuit (listCase[21]);
	AllerEnPrison allerEnPrison(listCase[31]);

	if(listeCase)
	{
        cout << "louverture" <<endl;
		//L'ouverture s'est bien passee, on peut donc lire

		int numCase = 39; //numero de la case, on commence par la 39i�me
		string ligne; //Une variable pour stocker les lignes lues

		getline(listeCase, ligne);
		getline(listeCase, ligne);
		std::string n = ligne;
		getline(listeCase, ligne);
		unsigned int L = stoi(ligne);
		getline(listeCase, ligne);
		unsigned int prixA = stoi(ligne);
		string num = to_string(numCase);
		//propriete = Propriete(n, L, prixA, listCase[0]);
		tabPropriete[numCase] = Propriete(n, L, prixA, listCase[0]);
		listCase[numCase] = &tabPropriete[numCase];
		//cout<<"Nom : "<<listCase[numCase]->getNom()<<" et le prix est :"<<listCase[numCase]->getLoyer()<<endl;
		numCase--;

		while(getline(listeCase, ligne)) //Tant qu'on n'est pas a la fin, on lit
		{
		cout<<numCase<<endl;
		string num = to_string(numCase);

        cout <<"ligne:"<<endl;
        cout << ligne << endl;
        cout << ":ligne"<< endl;
        cout << typeid(ligne).name() << endl;
        cout << typeid("rrr").name() << endl;

		if (ligne=="Terrain"){ //Si c'est une propriete il faut donner les attribus
			getline(listeCase, ligne);
			std::string n = ligne;
			getline(listeCase, ligne);
			unsigned int L = stoi(ligne);
			getline(listeCase, ligne);
			unsigned int prixA = stoi(ligne);
			tabPropriete[numCase] = Propriete(n, L, prixA, listCase[numCase+1]);
			listCase[numCase] = &tabPropriete[numCase];
			//cout<<"Nom : "<<listCase[numCase]->getNom()<<endl; //" et le prix est :"<<listCase[numCase]->getPrixAchat()<<endl;

		 }

        if (ligne=="Speciale"){
            //cout << "on entre" <<endl;
            getline(listeCase, ligne);
            string n = ligne;
            getline(listeCase, ligne);
            int prix = stoi(ligne);
            tabSpeciale[numCase] = Speciale(n, prix, listCase[numCase+1]);
            listCase[numCase]= &tabSpeciale[numCase];
            //cout<<"Nom : "<<listCase[numCase]->getNom()<<endl;
        }

		 else if (ligne=="Chance"){
			 tabChance[numCase] = Chance(listCase[numCase+1]);
			 listCase[numCase]=&tabChance[numCase];
			 //cout<<"Nom : "<<listCase[numCase]->getNom()<<endl;
		 }

		 else if (ligne == "Gare"){
			 getline(listeCase, ligne);
			 string n = ligne;
			 tabGare[numCase] = Gare(n,listCase[numCase+1]);
			 listCase[numCase] = &tabGare[numCase];
			 //cout<<"Nom : "<<listCase[numCase]->getNom()<<endl;
		 }

		 else if (ligne=="Communaute"){
			 tabCommunaute[numCase] = Communaute(listCase[numCase+1]);
			 listCase[numCase] = &tabCommunaute[numCase];
			 //cout<<"Nom : "<<listCase[numCase]->getNom()<<endl;
		 }
		 else if (ligne=="AllerEnPrison"){
			 listCase[numCase] = &allerEnPrison;
			 //cout<<"Nom : "<<listCase[numCase]->getNom()<<endl;
		 }

		 else if (ligne=="Compagnie"){
			 getline(listeCase, ligne);
			 string n = ligne;
			 tabCompagnie[numCase] = Compagnie(n, listCase[numCase+1]);
			 listCase[numCase] = &tabCompagnie[numCase];
			 //cout<<"Nom : "<<listCase[numCase]->getNom()<<endl;
		 }

		 else if (ligne=="ParcGratuit"){
			 listCase[numCase] = &parcGratuit;
			 //cout<<"Nom : "<<listCase[numCase]->getNom()<<endl;
		 }

		 else if (ligne=="Prison"){
			 listCase[numCase] = &prison;
			 //cout<<"Nom : "<<listCase[numCase]->getNom()<<endl;
		 }

		 else {
			 cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAh"<<endl;
		 }
		 numCase--;
		}
		Depart depart = Depart(listCase[1]);
		listCase[0] = &depart;
	}
	else
	{
	  cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
	}
}
#endif
