#pragma once
#include "Vehicule.h"

class Voiture : public Vehicule// la classe voiture herite de la classe vehicule
{
public: 
	Voiture(int id, string mar, string mo,float, int);

	//~Voiture();

private: 
	float km;
	int nmbreRoue;
	

};

