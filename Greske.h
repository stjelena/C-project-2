#pragma once
#include <exception>
using namespace std;

class GNijeIzracunat : public exception {
public:
	GNijeIzracunat() : exception("Greska: Nisu izracunati detalji posiljke") {}
};

class GIzracunat : public exception {
public:
	GIzracunat() : exception("Greska: Izracunati su detalji posiljke") {}
};
