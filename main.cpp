#include <iostream>
#include "Joueur.h"
#include "Pion.h"
#include "De.h"
#include "Gobelet.h"
#include "Propriete.h"
#include "Plateau.h"
#include "Terrain.h"

int main() {


    std::cout << "Hello, World!" << std::endl;


    std::srand(std::time(nullptr));

    cout << "\n------------------------------------\n" << endl;

    Case Communaute1;

    Case depart;

    Terrain Rue_Lecourbe("Rue Lecourbe", 100, 1000,0,100, &depart);

    Case Belleville("Belleville", &Rue_Lecourbe);

    depart.setCase("départ", &Belleville);

    //Communaute1.setCase("Caisse de communauté", &depart);


    Pion Chien(depart, "Chien");

    Pion Chapeau(depart, "Chapeau");

    Pion Bateau(depart, "Bateau");

    Joueur Thibault("Thibault", &Chien, 0);

    Joueur Yessine("Yessine", &Chapeau, 0);

    Joueur Theo("Theo", &Bateau, 20000);

    Thibault.setSolde(20000);

    cout << Thibault << endl;

    cout << "------------------------------------\n" << endl;

    Chien.setPosition(&Belleville);

    cout <<  Chien << endl;

    cout << "------------------------------------\n" << endl;

    Chien.setPosition(Chien.getPosition().getSuivante());

    cout << Chien << endl;

    cout << "------------------------------------\n" << endl;

    Gobelet gobelet(1);

    gobelet.genererValeur();

    Chien.deplacer(gobelet);

    cout << Chien << endl;

    cout << "------------------------------------\n" << endl;

    cout << "Etat initial\n" << endl;

    cout << Thibault << endl;

    cout << "On joue\n" << endl;

    Thibault.jouer(gobelet);

    cout << "Etat final\n" << endl;

    cout << Thibault << endl;

    cout << "------------------------------------\n" << endl;
    /*
    Rue_Lecourbe.arreterSur(&Thibault);

    Joueur* proprio_Rue_Lecourbe = Rue_Lecourbe.getProprietaire();

    cout << "\nProprio Rue Lecourbe : " << proprio_Rue_Lecourbe->getNom() << endl;

    cout << "Nombre de maison Rue Lecourbe : " << Rue_Lecourbe.getNbMaisons() << endl;

    Rue_Lecourbe.arreterSur(&Theo);

    cout << Theo << endl;

    cout << Thibault << endl;

     */

    cout << "\n------------------------------------\n" << endl;

    Thibault.jouer(gobelet);

    cout << Thibault << endl;

    //Rue Lecourbe est lu comme une case lors de .jouer et non comme un terrain


    return 0;
}

