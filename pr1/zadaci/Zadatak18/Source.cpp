#include <iostream>
using namespace std;

/*
	Deklarisite varijablu e tipa float i dodijelite joj vrijednost 2.78. Koristeci casting operator 
	pretvorite 'privremeno' varijablu e u integer i tu vrijednost ispisite na ekran. Zatim 
	ispisite ponovo vrijednost varijable e bez koristenja casting operatora. 
	Program treba ispisati vrijednost '2' i '2.78'. 
	U programu ne smijete koristiti dodatne varijable. 
*/

int main()
{
	float e = 2.78F;

	cout << "Vrijednost varijable e nakon castinga: " << (int)e << endl;
	cout << "Vrijednost varijable e bez castinga: " << e << endl;

	system("pause");
	return 0;
}