#include "Cadre.h"
#include <iostream>
using namespace std;


Cadre::Cadre()
{
}


Cadre::~Cadre()
{
}

void Cadre::Construction()const
{
	int i;
	int i1;

	for (i = 0; i <= Y - 1; i++)//For pour le nombre et saut de ligne 
	{
		if (i != 0)// Test si on est a la premire ligne
		{
			cout << endl;
		}
		for (i1 = 0; i1 <= X - 1; i1++)//For pour la longueur des lignes
		{
			if ((i == 0) || (i == Y - 1) || (i != 0 && i != Y - 1 && (i1 == 0 || i1 == X - 2))) {//Test si l'on se trouve sur la premiere ligne, dernire ligne ou au premier ou dernier char des autre lignes
				cout << Motif;
			}

			if ((i != 0 && i != Y - 1 && (i1 != 0 || i1 != X))) {//Test si l'on se trouve dans les autres char
				cout << ' ';
			}

		}
	}
	cout << endl;// Saute une ligne pour l presentation
}

void Cadre::SetX() {//Modifie X
	cout << "quel valeur voulez vous pour la longueur ?" << endl;

	cin >> X;
}

void Cadre::SetY() {//Modifie Y
	cout << "quel valeur voulez vous pour largeur ?" << endl;

	cin >> Y;
}

void Cadre::SetMotif() {//Modifie le motif
	cout << "Quel motif voulez vous ?" << endl;

	cin >> Motif;
}

int Cadre::GetX()const {//Recupere X
	return X;
}

int Cadre::GetY()const {//Recupere Y
	return Y;
}

char Cadre::GetMotif()const {//Recupere le motif
	return Motif;
}

int Cadre::GetSurface()const {//Recupere la surface
	return (X * Y);
}

int Cadre::GetPerimetre()const {//Recupere le perimetre
	return ((X + Y) * 2);
}

bool Cadre::IsCarre()const {//verifie si cadre est un carre
	if (X == Y) {
		return true;
	}
	else
	{
		return false;
	}
}

