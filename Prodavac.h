#ifndef _prodavac_h_
#define _prodavac_h_

#include "Rukovalac.h"
#include "Artikal.h"
#include "Lista.h"
#include <tuple>

class Prodavac: public Rukovalac {
	string naziv;

public:
	
	struct Podaci {
		Artikal artikal;
		double marza;
		int dani;
	}PODACI;

	Lista<Podaci> katalog;

public:

	Prodavac(string n) : naziv(n) {};

	double prodajnaCena(Artikal a);

	void operator+=(const Podaci& p) {
		katalog.operator+=(p);
	}

	string getNaziv() const { return naziv; }

	void obradi(Posiljka* posiljka, Artikal a);
};


#endif