#include <iostream>
using namespace std;

/*
	Napisite nekoliko linija koda koristeci samo izraze u kojima cete upotrebljavati 
	matematicki operator sabiranja (+) da bi ste izracunali vrijednost  y = 7*6 :  
	-  bez koristenja operatora za mnozenje (*) i bez koristenja petlje 
	-  od brojeva smijete upotrebljavati samo broj 0 i broj 7 
	-  u svakom izrazu smijete samo jednom koristiti matematicki operator sabiranja (+) 
	-  bit ce potrebno deklarisati varijablu y i ispisati izracunatu vrijednost y na ekran
*/

int main()
{
	int y;

	//y = 7 + 7 + 7 + 7 + 7 + 7;

	y = 7;
	y += 7;
	y += 7;
	y += 7;
	y += 7;
	y += 7;

	system("pause");
	return 0;
}