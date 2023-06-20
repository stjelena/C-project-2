#include "Artikal.h"
#include "Rukovalac.h"
#include "Posiljka.h"

#include <iostream>

int main() {
	Artikal a1("Tastatura", 56156165, 3000);
	Artikal a11("Tastatura1", 56156165, 3000);
	Artikal a2("Mis", 5614444, 2300);
	if (a1 == a2) cout << "jednaki";
	else cout << "nisu jednaki";

	if (a1 == a11) cout << "jednaki";
	else cout << "nisu jednaki";

	Rukovalac* R1 = new Rukovalac();
	Rukovalac* R2 = new Rukovalac();
	Rukovalac* R3 = new Rukovalac();


	Posiljka P1(a1);
	P1 += R1;
	P1 += R2;
	P1 += R3;

	cout << endl << endl << P1 << endl;

	P1.izracunajDetalje();
}