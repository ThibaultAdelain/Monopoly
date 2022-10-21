#include "Prison.h"

Prison::Prison(Case *suiv_):Case("prison", suiv_){
	nom = "prison";
	suivante = suiv_;
}
