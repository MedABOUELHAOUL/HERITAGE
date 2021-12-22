#include "Voirure.h"

Voiture::Voiture(int id, string mar, string mo, float k, int n) 
	:Vehicule(mar,mo,id) // initializer list
{
	std::cout << "constructeur de la classe fille" << std::endl;
	this->km = k;
	this->nmbreRoue = n;

}
