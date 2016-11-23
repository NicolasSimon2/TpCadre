#pragma once
#include <iostream>

using namespace std;

class Cadre
{

private:

	char Motif = '*';
	int X = 10;
	int Y = 5;

public:
	Cadre();
	~Cadre();
	void Construction()const;

	void SetX();

	void SetY();

	void SetMotif();

	int GetX()const;

	int GetY()const;

	char GetMotif()const;

	int GetSurface()const;

	int GetPerimetre()const;

	bool IsCarre()const;

};

