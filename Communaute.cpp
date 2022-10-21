#include "Communaute.h"
#include <fstream>
#include <string>

Communaute::Communaute(Case *suiv_):Case("communaute", suiv_){}

void Communaute::arreterSur(Joueur joueur){
   ifstream cartes_Communaute("C:/Users/theo/eclipse-workspace/Monopoly_final_/src/Carte_Communaute.txt");
   int num_carte = rand() % 3 + 1; 	//num�ro de la carte tiree
   int i = 0;						//initialisation du numero du curseur

   if(cartes_Communaute)
   {
      //L'ouverture s'est bien pass�e, on peut donc lire

      string ligne; //Une variable pour stocker les lignes lues

      while(getline(cartes_Communaute, ligne) && num_carte-1>i) //Tant qu'on n'est pas � la fin, on lit
      {
         i++;
      }
      cout<<joueur.getNom()<<" doit realiser l'action suivante : "<<num_carte<<endl;
   }
   else
   {
      cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
   }
}

