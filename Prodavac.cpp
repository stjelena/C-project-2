#include "Prodavac.h"
#include "Posiljka.h"

double Prodavac:: prodajnaCena( Artikal a)
{
	double pc = 0;
	for (int i = 0; i < katalog.brEl(); i++) {
		if (katalog[i].artikal == a) {
			pc = katalog[i].marza * katalog[i].artikal.getNCena();
		}
	}
	return pc;
}

void Prodavac::obradi(Posiljka* posiljka, Artikal a)
{
	for (int i = 0; i < katalog.brEl(); i++) {
		if (katalog[i].artikal == a) {
			posiljka->DETALJI.brDanaCekanja += katalog[i].dani;
			posiljka->DETALJI.cena += prodajnaCena(a);
		}
	}
}

