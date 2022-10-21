#include "Speciale.h"

Speciale::Speciale(string nom_, int prix_, Case *suiv_):Case(nom_, suiv_){
	prix = prix_;
	nom = nom_;
}
