#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napisite program koji ce prosljedjivati niz kao parametar u funkciju u kojoj ce 
	se vrijednosti clanova niza promijeniti. Neka originalni niz ima 5 clanova cije su
	vrijednosti 0,1,2,3 i 4; a neka vrijednosti modificiranog niza budu dvostruke vrijednosti 
	originalnih clanova niza. 
*/

void modifikacija(int[], int);

int main()
{
	int const size = 5;
	int niz[size] = { 0, 1, 2, 3, 4 };

	cout << "Efekat proslijeðivanja cijelog niza po refernci\n";
	cout << "Vrijednost orginalnog niza: ";
	for (int i = 0; i < size; i++)
		cout << setw(2) << niz[i];

	modifikacija(niz, size);
	cout << "Vrijednost modificiranog niza: ";
	for (int i = 0; i < size; i++)
		cout << setw(2) << niz[i];

	system("pause");
	return 0;
}

void modifikacija(int niz[], int size)
{
	for (int i = 0; i < size; i++)
		niz[i] *= 2;
}