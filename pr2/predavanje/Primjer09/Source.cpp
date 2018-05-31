#include<iostream>
using namespace std;

/*
	niz kao parametar funkcije
*/

void ispisNiz(int niz[], int max) {
	for (int i = 0; i < max; i++)
		cout << "niz[" << i << "]= " << niz[i] << endl;
}

void ucitajNiz(int niz[], int max) {
	for (int i = 0; i < max; i++) {
		cout << "niz[" << i << "]= ";
		cin >> niz[i];
	}
}

int main()
{
	const int max = 3;
	int niz[max];

	ucitajNiz(niz, max);
	ispisNiz(niz, max);

	system("pause");
	return 0;
}