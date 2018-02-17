//racunannje kamate

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	double	iznos,				//iznos depozita
			osnovica = 1000.0,	//osnovica
			kamata = 0.05;		//kamata

	cout	<< "Godina " 
			<< setw(21) //sirina zapisa
			<< "iznos depozita\n";

	for (int godina = 1; godina <= 10; godina++) {			//postikrement kao brojac
		iznos = osnovica * pow(1.0 + kamata, godina);
		cout	<< setw(4) << godina
				<< setiosflags(ios::fixed | ios::showpoint)	//decimalna tacka
				<< setw(21) << setprecision(2)				//tacnost na dvije decimale
				<< iznos << endl;
	}
	system("pause");
	return 0;
}