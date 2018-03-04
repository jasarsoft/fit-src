#include <iostream>
using namespace std;

/*
	Napravite definicije za sljedeæe prototipove funkcija:
	
	float sr_vrij(float, float, float); // izlaz je aritetmicka srednina 
	int suma_parnih_brojeva(int, int);  // izlaz je suma parnih brojeva od u1 do u2
	float max(float, float);            // izlaz je veci broj od u1 i u2
	float hipotenuza(float, float);     // izlaz je hipotenuza, a ulaz su dvije katete
	float kateta(float, float);         // izlaz je kateta, a ulaz je hipotenuza i kateta
*/

float sr_vrij(float, float, float); // izlaz je aritetmicka srednina 
int suma_parnih_brojeva(int, int);  // izlaz je suma parnih brojeva od u1 do u2
float max(float, float);            // izlaz je veci broj od u1 i u2
float hipotenuza(float, float);     // izlaz je hipotenuza, a ulaz su dvije katete
float kateta(float, float);         // izlaz je kateta, a ulaz je hipotenuza i kateta

void main()
{
	float a, b, c, y1;
	cout << "Unesite tri broja \n";
	cin >> a >> b >> c;
	y1 = sr_vrij(a, b, c);
	cout << "Aritmeticka sredina od tri unesena broja je " << y1 << endl;

	int m, n, y2;
	cout << "\nUnesite pocetak i kraj niza \n";
	cin >> m >> n;
	y2 = suma_parnih_brojeva(m, n);
	cout << "Suma parnih brojeva od " << m << " do " << n << " je " << y2 << endl;

	float q, w, y3;
	cout << "\nUnesite dva broja \n";
	cin >> q >> w;
	y3 = max(q, w);
	cout << "Veci broj od dva unesena: " << y3 << endl;

	float h, k1, k2;
	cout << "\nUnesite dvije katete jednakostranicnog trougla \n";
	cin >> k1 >> k2;
	h = hipotenuza(k1, k2);
	cout << "Hipotenuza: " << h << endl;

	float hi, ka1, ka2;
	cout << "\nUnesite hipetnuzu i katetu \n";
	cin >> hi >> ka1;
	ka2 = kateta(hi, ka1);
	cout << "Kateta: " << k2 << endl;

	system("pause");
}

float sr_vrij(float a, float b, float c)
{
	return (a*b*c / 3);
}

int suma_parnih_brojeva(int m, int n)
{
	int suma = 0;

	for (int i = m; i <= n; i++)
	{
		if (i % 2 == 0)
			suma += i;
	}

	return suma;
}

float max(float x, float y)
{
	return x >= y ? x : y;
}

float hipotenuza(float a, float b)
{
	return sqrt(pow(a, 2) + pow(b, 2));
}

float kateta(float h, float k)
{
	return sqrt(pow(h, 2) - pow(k, 2));
}