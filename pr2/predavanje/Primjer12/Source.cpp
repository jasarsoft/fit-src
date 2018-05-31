#include<iostream>
using namespace std;

/*
	dvodimenzionalni nizovi i rekurzija
*/

const int redova = 3;
const int kolona = 3;

int sumaRekurzivno(int matrica[][kolona], int red, int kol) {
	if (red < 0) return 0;

	int broj = matrica[red][kol];
	
	if (kol == 0) //ako smo do kraja kolone predji na red inace na kolonu
		return broj + sumaRekurzivno(matrica, red - 1, kolona - 1);

	return broj + sumaRekurzivno(matrica, red, kol - 1);
}

int main()
{
	int matrica[redova][kolona] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	cout << "Suma: " << sumaRekurzivno(matrica, redova - 1, kolona - 1) << endl;

	system("pause");
	return 0;
}