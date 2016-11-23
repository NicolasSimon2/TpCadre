#include <iostream>
#include "Cadre.h"

using namespace std;

int main()
{
	int nb;

	Cadre cadre;

	cadre.Construction();

	cadre.SetX();
	cadre.SetY();
	cadre.SetMotif();

	cout << "Votre cadre a une longueur de" << cadre.GetX() << endl;
	cout << "Votre cadre a une largeur de" << cadre.GetY() << endl;
	cout << "Votre motif est " << cadre.GetMotif() << endl;

	cadre.Construction();

	cout << "Votre cadre a un perimetre de " << cadre.GetPerimetre() << endl;
	cout << "Votre cadre a une surface de " << cadre.GetSurface() << endl;
	if (cadre.IsCarre() == true) {
		cout << "Votre cadre est un carre" << endl;
	}
	else
	{
		cout << "Votre cadre est un rectangle" << endl;
	}
		
	cadre.~Cadre();
	cin >> nb;// Pour que la fenetre reste ouverte

}