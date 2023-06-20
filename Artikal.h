#ifndef _artikal_h_
#define _artikal_h_

using namespace std;
#include <string>

class Artikal {
	string naziv;
	int barkod;
	double nabavnaCena;

public:
	Artikal(string n, int b, double nc) :
		naziv(n), barkod(b), nabavnaCena(nc) {};

	string getNaziv() const { return naziv; }
	int getBarkod() const { return barkod; }
	double getNCena() const { return nabavnaCena; }

	friend bool operator==(Artikal &a1, Artikal &a2);
};


#endif