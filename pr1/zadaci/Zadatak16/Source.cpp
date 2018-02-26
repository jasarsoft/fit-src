#include <iostream>
using namespace std;

/*
	Prepravite prethodni program tako da program racuna i ispisuje zapreminu V i 
	povrsinu cilindra (varijabla Pcil). 
	- Koristite dodatnu varijablu M za povrsinu omotaca i varijablu O za obim kruga. 
	- Koristite konstantu Pi.	
	
	Matematicke formule koje vam mogu pomoci su date u nastavku: 
	P(cilindar) = 2P(krug) + M
	M = O(krug) * H
	O(krug) = 2*r*PI
	P(krug) = r^2 * PI
*/

int main()
{
	const float PI = 3.14F;

	int poluprecnik, visina; //cilindar
	float krug, povrsina, zapremina, omotac, obim; //cilindra

	cout << "Unesite poluprecnik cilindra: ";
	cin >> poluprecnik;
	cout << "Unesite visinu cilindra: ";
	cin >> visina;

	obim = 2 * poluprecnik * PI; //O(krug) = 2*r*PI
	omotac = obim * visina; //M = O(krug) * H
	krug = poluprecnik * poluprecnik * PI; //P(krug) = r^2 * PI
	povrsina = 2 * krug + omotac; //P(cilindar) = 2P(krug) + M
	zapremina = povrsina * visina;

	cout << "Obim cilindra: " << obim << endl;
	cout << "Omotac cilindra: " << omotac << endl;
	cout << "Povrsina kruga cilindra: " << krug << endl;
	cout << "Povrsina cilindra: " << povrsina << endl;
	cout << "Zapremina cilindra: " << zapremina << endl;

	system("pause");
	return 0;
}