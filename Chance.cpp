#include "Chance.h"
#include <fstream>
#include <string>

Chance::Chance( Case *suiv_):Case("chance", suiv_){}

void Chance::arreterSur(Joueur joueur){
   ifstream cartes_Chance("C:/Users/theo/eclipse-workspace/Monopoly_final_/src/Carte_Chance.txt");
   int num_carte = rand() % 3 + 1; 	//numero de la carte tiree
   int i = 0;						//initialisation du numero du curseur

   if(cartes_Chance)
   {
      //L'ouverture s'est bien pass�e, on peut donc lire

      string ligne; //Une variable pour stocker les lignes lues

      while(getline(cartes_Chance, ligne) && num_carte-1>i) //Tant qu'on n'est pas � la fin, on lit
      {
         i++;
      }
      cout<<joueur.getNom()<< " doit realiser l'action : "<<num_carte<<endl;
   }
   else
   {
      cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
   }
}

