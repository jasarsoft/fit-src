#include <iostream>
using namespace std;

/*
	Optimizirajte prethodni program: 
	a)	Kao sto vidite, zadatak smo rijesili tako što smo brojali sa koliko brojeva je djeljiv 
		broj n. Medjutim, program ne nudi optimalno rjesenje. Moguce je smanjiti 
		koristenje resursa za dva puta, tako sto cemo provjeravati djeljivost broja n samo 
		sa brojevima iz intervala od 2 do n/2. Primjer: 
		Za n=36597, provjeravat cemo djeljivost broja n samo u intervalu od 2 do 18298, 
		jer broj 36597 nije sigurno djeljiv ni sa jednim brojem iz intervala 18299 do 36596. 
 
	b)  Dodatno optimiziranje programa: 
		Ako smo u toku provjeravanja (izvrsavanja petlje) nasli da je broj n djeljiv sa 
		jednim brojem (brojem vecim od 1) mozemo odmah prekinuti petlju - jer broj n 
		sigurno nije prost. 
		Poslije petlje slijedi if-else-iskaz (dvostruki izbor) koji treba, na osnovu nekog 
		uslova, ispisati "…je prost" ili "…nije prost".  
		Posto, if-else-iskaz 'ne zna' da li se petlja prekinula, moramo (morali smo) u if-
		iskazu (n%i==0) promijeniti neku vrijednost neke varijable tako da if-else-iskaz 
		koji ispisuje poruku moze 'znati' da li se if-iskaz (n%i==0) izvrsio. 
		Promjena neke vrijednosti u if-iskazu (n%i==0) moze da bude: brojac=1  ili 
		prost=false ili sl. 
		(Napomena: varijable brojac ili prost moraju da imaju neku pocetnu vrijednost 
		prije izvrsavanja petlje. Pocetna vrijednost mora biti razlicita od vrijednosti 1 za 
		varijablu brojac i razlicita od vrijednosti false za varijablu prost.) 
   
	Prekidanje petlje mozete vrsiti na dva naèina: 
	1.  Pomocu dodatnog uslova za prekid petlje. 
		Ako koristite varijablu brojac, uslov bi glasio: 
		- i<=n/2 && brojac!=1  (cita se: ponavlja ako je …)  
			dovoljno je da jedan uslov ne bude zadovoljen i petlja se prekida 
		- !(i>n/2 || brojac==1)  (sita se: ponavlja ako je …)  
			dovoljno je da jedan uslov bude zadovoljen i petlja se prekida 
	2.  Pomocu naredbe break: Kada se prvi put u petlji izvrsi naredba break, petlja 
		se prekida i nastavlja se sa izvrsavanjem naredne linije koda koja slijedi nakon 
		petlje. 
*/

int main()
{
	int n, i = 2;
	bool prost = true;

	cout << "Unesite broj: ";
	cin >> n;

	while (i <= (n / 2))
	{
		if (n % i == 0)
		{
			prost = false;
			break;
		}
		i++;
	}

	if (prost)
		cout << "Broj je prost!\n";
	else
		cout << "Broj nije prost!\n";

	system("pause");
	return 0;
}