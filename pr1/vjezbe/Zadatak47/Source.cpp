#include <iostream>
using namespace std;

/*
	Napisite program u kojem cete upotrijebiti funkciju koja zamjenjuje vrijednosti varijabli a 
	i b vrijednostima sume i razlike tih vrijednosti. Funkcija je tipa void, tj. ne vraca 
	vrijednost. Ispis novih vrijednosti vrsiti u glavnoj funkciju (programu). 
	Npr. Ako unesete dvije vrijednosti: a=1 i b=3; funkcija treba da vrati vrijednosti a=4
	(1+3) i b=-2 (1-3). 
*/

void zamjena(int &, int &);

int main()
{
	int x = 1, y = 3;

	cout << "Vrijednost provg argumenta na pocetku main funckije je: " << x << endl;
	cout << "Vrijednost drugog argumenta na pocetku main funkcije je: " << y << endl;

	zamjena(x, y);

	cout << "Vrijednost prvog argumenta na kraju main funckije je: " << x << endl;
	cout << "Vrijednost drugog argumenta na kraju main funkcije je: " << y << endl;

	system("pause");
	return 0;
}

void zamjena(int &a, int &b)
{
	int temp = a;

	a = a + b;
	b = temp - b;

	cout << "Vrijednost prvog arumenta u funckiji je: " << a << endl;
	cout << "Vrijednost drugog argumenta u funkciji je: " << b << endl;
}