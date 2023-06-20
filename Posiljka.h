#ifndef _posiljka_h_
#define _posiljka_h_

#include "Artikal.h"
#include "Lista.h"
#include "Greske.h"

using namespace std;
#include <iostream>

class Rukovalac;

class Posiljka {

	Artikal artikal;
	static int posl_id;
	int ID = ++posl_id;

	Lista<Rukovalac*> lista;

public:
	bool izracunato = false;

public:
	struct Detalji {
		int brDanaCekanja = 0;
		double cena = 0;
	}DETALJI;

public:
	Posiljka(Artikal a) : artikal(a) {};
	
	// ??
	void izracunajDetalje();

	Artikal getArtikal() const { return artikal; }
	int getID() const { return ID; }
	Detalji getDetalji() { 
		if (!izracunato) throw new  GNijeIzracunat();
		else return DETALJI; 
	}

	void operator+=(Rukovalac* r);

	Rukovalac& operator[](int poz);

	friend ostream& operator<<(ostream& it, Posiljka& p);
};


#endif
