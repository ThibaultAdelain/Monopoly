#include "Depart.h"

Depart::Depart(){
	nom = "Depart";
	suivante = nullptr;
}
Depart::Depart(Case *suiv_):Case("depart", suiv_){
}
