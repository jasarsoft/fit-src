#include <iostream>
using namespace std;

/*
	Pretpostavite da plavi dio na datoj slici predstavlja zemlju koja je prokopana da bi se 
	mogla ubaciti vodovodna cijev. Vodovodna cijev je na slici predstavljena sivom bojom.

	Napravite program u kome ce korisnik unijeti velicinu x koja predstavlja precnik vodene
	cijevi (vanjski precnik – u m kao mjernoj jedinici) i duzinu cijevi d (u metrima kao
	mjernoj jedinici). Program treba, zatim, ispisati:
	a)  kolika je zapremina zemlje koju je potrebno iskopati (u m 3 )
	b)  kolika je povrcina presjeka unutrasnjosti cijevi, ako pretpostavimo da je
		izolaciona cijevi uvijek iste debljine kao na slici (tj. 5 cm)
	c)  kolika je povrsina presjeka izolacije vodovodne cijevi (povrsina prikazana
		sivom bojom na gornjoj slici)
	d)  kolika je povrsina presjeka cijevi (povrsina debljine cijevi)
	e)  koliko litara vode ce se nalaziti u vodovodnoj cijevi duzine d
	f)  kolika zapremina materijala je neophodna da bi se napravila potrebna
		vodovodna cijev (potrebno je izracunati zapreminu izolacije)
*/

int main()
{
	float x, d; //precnik vodene cijevi i duzina cijevi
	const float PI = 3.14F;

	cout << "Unesite vanjski precnik cijevi (m): ";
	cin >> x;
	cout << "Unesite duzinu cijevi (m): ";
	cin >> d;

	//a
	float Vze = (0.15F * 0.05F / 2.0F + 0.05F * x + x*x) * d;
	cout << "a) Zapremina zemlje koju je potrebno iskopati: " << Vze << " m3 \n\n";

	// b 
	float Pcu = (x - 0.1F) * (x - 0.1F) / 4.0F * PI;	//povrsina prsjeka cijevi (unutrasnja povrsina) 
	float Pcv = x * x * PI / 4.0F;					//povrsina prsjeka cijevi (vanjska povrsina) 
	float Pci = Pcv - Pcu;							//povrsina prosjeka cijevi (povrsina izolacije) 

	cout << "b) Povrsina pr. unutrasnjosti vodovodne cijevi:     " << Pcu << " m2 \n";
	cout << "c) Povrsina pr. izolacije vodovodne cijevi:         " << Pci << " m2 \n";
	cout << "d) Povrsina pr. vodovodne cijevi (ukupna povrsina): " << Pcv << " m2 \n\n";

	// c  
	float Vcu = Pcu * d * 1000;
	cout << "e) Zapremina unutrasnjosti cijele cijevi: " << Vcu << " litara \n";

	system("pause");
	return 0;
}