//
// Created by Thibault Adelain on 18/01/2022.
//

#include "Terrain.h"


//
// Created by Thibault Adelain on 18/01/2022.
//

#include "Terrain.h"
#include "iostream"
using namespace std;

Terrain::Terrain() {
}

Terrain::Terrain(string n, int L, int prixA, int nb_maisons, int prix_maison,
                 Case* suiv, Joueur* proprietaire):Propriete(n, L, prixA, nb_maisons,
                                                             prix_maison, suiv, proprietaire) {
}

void Terrain::arreterSur(Joueur* J){
    if (proprietaire == nullptr) {
        cout << "Vous êtes sur " << nom << endl;
        cout << "Cette propriété est libre, vous n'avez rien à payer !" << endl;
        cout << "prix = " << prixAchat << " ; loyer = " << loyer << endl;
        cout << "Voulez-vous l'acheter ? (écrire : oui/non)" << endl;
        string reponse;
        cin >> reponse;
        if (reponse == "oui" && (J->getSolde() - prixAchat) >= 0) {
            J->setSolde((J->getSolde() - prixAchat));
            this->proprietaire = J;
            cout << "Vous êtes maintenat proprietaire de " << nom << ", il vous reste " << J->getSolde() << endl;

            cout << "Vous êtes chez vous !" << endl;
            cout << "Une maison coûte : " << prixAchat  << " ; Un hotel coûte " << 5 * prixAchat << endl;
            cout << "Vous avez " << nb_maisons  << " maison(s) sur votre propriété " << nom << endl;
            cout << "Voulez-vous construire une / plusieurs maison / un hôtel ?"
                    " (écrire : oui/non)" << endl;
            string reponse;
            cin >> reponse;
            if (reponse=="oui") {
                cout << "Combien voulez-vous construire de maisons ? (5 maisons = 1 hôtel)" << endl;
                int nb_a_construire;
                cin >> nb_a_construire;
                if (J->getSolde() - nb_a_construire*prix_maison >= 0 && nb_a_construire + nb_maisons <=5) {
                    J->paie(nb_a_construire*prix_maison);
                    this->nb_maisons = nb_maisons + nb_a_construire;
                    loyer = loyer + nb_maisons*100;
                    cout << "\nVous avez " << nb_maisons << " maisons sur " << nom << ", il vous reste "
                    << J->getSolde() << endl;
                    cout << "\nAie ! Un joueur tombant sur votre propriété devra payer " << loyer << endl;
                }
                else if (nb_a_construire + nb_maisons > 5) {
                    cout << "Désolé, 5 maisons = 1 hôtel maximum ! " << endl;
                }
                else if (J->getSolde() - nb_a_construire*prix_maison < 0) {
                    cout << "Désolé, vous n'avez pas assez d'argent !";
                }
            }

        }
        if (reponse == "oui" && (J->getSolde() - prixAchat) < 0) {
            cout << "Vous n'avez pas assez d'argent ! Prix d'achat = " << prixAchat << " ; Solde actuelle = " << J->getSolde() << endl;
        }
    }
    else {
        string nom_proprio = proprietaire->getNom();
        if (J->getNom() == nom_proprio) {
            cout << "Vous êtes chez vous !" << endl;
            cout << "Une maison coûte : " << prixAchat  << "Un hotel coûte " << 5 * prixAchat << endl;
            cout << "Voulez-vous construire une / plusieurs maison ?"
                    " (écrire : oui/non)" << endl;
            string reponse;
            cin >> reponse;
            if (reponse=="oui") {
                cout << "Combien voulez-vous construire de maisons ? (5 maisons = 1 hôtel)" << endl;
                int nb_a_construire;
                cin >> nb_a_construire;
                if (J->getSolde() - nb_a_construire*prix_maison >= 0 && nb_a_construire + nb_maisons <=5) {
                    J->paie(nb_a_construire*prix_maison);
                    this->nb_maisons = nb_maisons + nb_a_construire;
                    loyer = loyer + nb_maisons*100;
                }
                if (J->getSolde() - nb_a_construire*prix_maison >= 0 && nb_a_construire + nb_maisons > 5) {
                    cout << "Désolé, 5 maisons = 1 hôtel maximum ! ";
                }
                if (J->getSolde() - nb_a_construire*prix_maison < 0) {
                    cout << "Désolé, vous n'avez pas assez d'argent !";
                    cout << "Combien voulez-vous construire de maisons ? (5 maisons = 1 hôtel)" << endl;
                    cin >> nb_a_construire;
                }
            }
        }
        else {
            cout << "Ce n'est pas chez vous ! Payez " << loyer << " à " << proprietaire->getNom() << " !" << endl;
            if (J->getSolde() - loyer >= 0) {
                J->setSolde(J->getSolde() - loyer);
                proprietaire->setSolde(proprietaire->getSolde() + loyer);
                cout << "solde " << J->getNom() << " = "<< J->getSolde() << endl;
            }
            else {
                proprietaire->setSolde(proprietaire->getSolde() + J->getSolde());
                J->setSolde(0);
            }
        }
    }
}