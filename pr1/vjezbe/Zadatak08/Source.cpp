/*
	Satnica u automehanicarskoj radionici iznosi 35 KM (bez PDV). Ukoliko se u program  
	unese  cijena  dijelova  i  broj  radnih  sati  omogucite  izracun  ukupnih  troskova 
	popravke  automobila  i  ispis  odgovarajuceg  racuna.  Prilikom  izracuna  troskova  ne 
	zaboravite obracunati PDV (17%). Ispis uredite da izgleda sto je slicnije moguce pravom 
	racunu  (naziv  automehanicara,  sjediste,  sve  stavke  pojedinasno  na  rasunu,  porez, 
	ukupno). 
*/

#include <iostream>
using namespace std;

int main()
{
	const double PDV = 0.17, SATNICA = 35.0;
	double dijelovi, ukupno;
	float radni_sati;

	cout << "Unesite cijenu rezervnih djelova ";
	cin >> dijelovi;
	cout << "Unesite broj radnih sati ";
	cin >> radni_sati;

	ukupno = dijelovi + SATNICA + radni_sati;

	cout << "\tAutomehanicarska radnja\n";
	cout << "\tMostar bb\n";
	cout << "_________________________\n";
	cout << "\tRacun br 323\n";
	cout << "_________________________\n";
	cout << "dijelovi ........: " << dijelovi << "KM\n";
	cout << "troskovi rada ...: " << SATNICA * radni_sati << "KM\n";
	cout << "_________________________\n";
	cout << "Ukupno bez PDV...: " << ukupno << "KM\n";
	cout << "PDV..............: " << ukupno * PDV << "KM\n";
	ukupno = ukupno + ukupno * PDV;
	cout << "_________________________\n";
	cout << "Ukupno s PDV.....:" << ukupno << "KM\n";

	system("pause");
	return 0;
}