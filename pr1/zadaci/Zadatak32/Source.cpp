#include <iostream>
#include <iomanip>
using namespace std;

/*
	Napravite program koji ce zahtijevati unos dva cijela broja. Neka do budu varijable a i b 
	tipa integer. Pa ako je korisnik npr. unio brojeve 7 (za a) i 3 (za b) program treba da 
	ispisite rezultate dijeljenja u sljedecem obliku: 
 
	Unesi broj a: 7 
	Unesi broj b: 3 
 
	decimalno dijeljenje:    7:3 = 2.33333333 
	cjelobrojno odjeljenje:  7:3 = 2 
	odjeljenje sa ostatkom:  7:3 = 2 + ostatak 1   
*/

int main()
{
	int a, b;

	cout << "Unesi broj a: ";
	cin >> a;
	
	cout << "Unesi broj b: ";
	cin >> b;

	cout << "Decimalno djeljenje:\t" << a << ":" << b << " = " << showpoint << float(a) / float(b) << endl;
	cout << "Cjelobrojno djeljenje:\t" << a << ":" << b << " = " << a / b << endl;
	cout << "Dljenje sa ostatkom:\t" << a << ":" << b << " = " << a / b << " + ostatak " << a%b << endl;

	system("pause");
	return 0;
}