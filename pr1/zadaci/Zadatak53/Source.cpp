#include <iostream>
using namespace std;

/*
	Koji od sljedeca dva programa ispisuje ispravnu poruku? Kojem if-iskazu pripada else? 

	void main()
	{
		int c;

		cout << "Unesite broj: ";
		cin >> c;

		if (c >= 5)
			if (c >= 10)
				cout << "Broj je (strogo) veci od 10 \n";
			else
				cout << "Broj je izmedju 5 i 10 \n";
	}

	void main()
	{
		int c;

		cout << "Unesite broj: ";
		cin >> c;

		if (c >= 5)
			if (c >= 10)
				cout << "Broj je (strogo) veci od 10 \n";
		else
			cout << "Broj je manji od 5 \n";
	}


	1.  Kojem if-iskazu pripada else? Kako glasi pravilo?
	2.  Dodajte neispravnom programu viticaste zagrade tako da ispisuje ispravna poruku!
	3.  Dodajte ispravnom programu viticaste zagrade tako da se lakse može raspoznati
	    koja ce se poruka ispisati
*/

int main()
{
	int c;

	cout << "Unesite broj: ";
	cin >> c;

	//prvi kod
	if (c >= 5)
	{
		if (c >= 10)
		{
			cout << "Broj je (strogo) veci od 10 \n";
		}
		else
		{
			cout << "Broj je izmedju 5 i 10 \n";
		}
	}

	//drugi kod
	if (c >= 5)
	{
		if (c >= 10)
		{
			cout << "Broj je (strogo) veci od 10 \n";
		}
	}
	else
	{
		cout << "Broj je manji od 5 \n";
	}
		
	system("pause");
	return 0;
}