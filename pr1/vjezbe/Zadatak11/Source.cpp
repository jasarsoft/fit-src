/*
	Napisite  program  za  izracunavanje  indeksa  tjelesne  mase  (BMI)  te  ispisite 
	odgovarajuce  poruke.  Indeks  tjelesne  mase  se  racuna  po  formuli:  
	
	BodyMassIndex=masa/visina^2

	Masa se izrazava u kilogramima, a visina u metrima. Ukoliko vam  je  indeks  tjelesne  
	mase  u  rasponu  od  20  do  25  vasa tjelesna  masa  je  u  skladu  s vasom visinom, 
	ukoliko je vas BMI manji od 20 pothranjeni ste, a ukoliko je veci od 25 naginjete gojaznosti. 
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float masa, visina, bmi;

	cout << "Unesite masu u kilogramima ";
	cin >> masa;
	cout << "Unesite visinu u metrima ";
	cin >> visina;

	bmi = masa / pow(visina, 2);

	if ((bmi >= 20) && (bmi <= 25)) //u direktnom bloku se nalazi samo jedna naredba i nisu potreben viticaste zagrade
		cout << "Vasa masa je uskladu sa visinom i BMI iznosi " << bmi << endl;
	else //u alternativnom bloku se nalazi vise naredbi potrebne viticaste zagrade 
	{
		if (bmi < 20)
			cout << "Pothranjeni ste\n";
		else
			cout << "Naginjete gojaznosti\n";
	}

	system("pause");
	return 0;
}