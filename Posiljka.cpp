#include "Posiljka.h"
#include "Rukovalac.h"

int Posiljka::posl_id = 0;

void Posiljka::izracunajDetalje()
{
	for (int i = 0; i < lista.brEl(); i++) {
		lista[i]->obradi(this, getArtikal());
	}
	izracunato = true;
}

void Posiljka::operator+=(Rukovalac* r)
{
	if (izracunato) throw new GIzracunat();
	lista.operator+=(r);
}

Rukovalac& Posiljka::operator[](int poz)
{
	return *lista.operator[](poz);
}

ostream& operator<<(ostream& it, Posiljka& p)
{
	it << "Posiljka" << "[" << p.getID() << ", " << p.getArtikal().getNaziv() << "]";
	return it;
}
