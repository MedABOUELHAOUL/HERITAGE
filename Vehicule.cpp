#include "Vehicule.h"

Vehicule::Vehicule(string m, string mo, int id)
{
	cout << "constructeur de la classe mere" << endl;
	this->marque = m;
	this->model = mo;
	this->id = id;
}


