#ifndef _rukovalac_h_
#define _rukovalac_h_


using namespace std;
#include <iostream>

class Posiljka;

class Rukovalac {

public:

	Rukovalac() {};

	virtual void obradi(Posiljka* posiljka, Artikal a);
	 

};


#endif
