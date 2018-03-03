#include <iostream>
using namespace std;

/*
	Pronadjite greske u pozivima funkcija u sljedecem programu 
	uz pretpostavku da su prototipovi funkcija ispravni.
*/

void f0();		// prototip funkcije
void f1(int); 	// prototip funkcije
void f2(int, int); 	// prototip funkcije
void f3(float); 	// prototip funkcije

void main()
{
	double x = f1(); //povratna vrijednost i argument funkcije
	f0(); //ispravno
	f2(3, 4); //ispravno
	f2(sqrt(9.0), sqrt(4.0)); //vrijednosti trebaju biit kastovane u int
	f2(pow(2.0), sqrt(4.0)); //funkcija pow, njezina povratna vrijednost i povratna vrijednost sqrt-a
	f3(pow(2.0, 2.0)); //kasotvati u float pow
	f1(f3()); //f3 je void 
	pow(3, 4); //ok ali nema smisla
	x = sqrt(f1(), f3()); //f1 i f3 nemaju povratnu virjednost
	cout << f3() << endl; //f3 nema povratno vrijednost
	cout << int(f3()) << endl; //f3 nema povratnu vrijednost 
	char y = system("PAUSE"); //system nema povratnu vrijednost
}
