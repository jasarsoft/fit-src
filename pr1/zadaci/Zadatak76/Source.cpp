#include <iostream>
using namespace std;

/*
	Napraviti program za skracivanje razlomka. Program rijesiti u skladu sa fazama programiranja! 

	Pomoæ:
	-	input: bojnik i nazivnik
	-	provjerit cemo koji ima manju vrijednost bojnik ili nazivnik: manju vrijednost
		cemo pridruziti varijabli manji (zbog optimizacije programa)
	-	moramo provjeriti djeljivost varijable brojnik i nazivnik sa brojevima iz opsega
		[manji,  2] (ako ne zelimo optimizirati programa, onda je svejedno da li cemo koristiti
		opseg [brojnik, 2] ili opseg [nazivnik, 2])
	-	ako su brojnik i nazivnik djeljivi sa trenutnom vrijednošæu brojaca petlje (i),
		podijeliti cemo ih sa brojem i
	-	output (skraceni razlomak): varijabla brojnik i varijabla nazivnik
*/

int main()
{
	int b, n; //brojnik i nazivnik

	cout << "Unesite brojnik: ";
	cin >> b;

	cout << "Unesite nazvinik: ";
	cin >> n;

	int m; //manji
	if (b <= n)
		m = b;
	else
		m = n;

	int i = 2;
	while (i <= m)
	{
		if (b % i == 0 && n % i == 0)
		{
			b /= i; //b = b / i;
			n /= i; //n = n / i;
		}

		i++;
	}

	cout << "Brojnik: " << b << endl;
	cout << "Nazivnik: " << n << endl;

	system("pause");
	return 0;
}