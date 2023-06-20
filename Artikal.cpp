#include "Artikal.h"

bool operator==(Artikal &a1, Artikal &a2)
{
	if (a1.getBarkod() == a2.getBarkod())
		return true;
	else return false;
}
