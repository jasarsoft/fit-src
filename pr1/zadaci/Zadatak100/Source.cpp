#include <iostream>
using namespace std;

/*
	Koje ce poruke ispisati sljedeci program? Zapisite redoslijed poruka i usporedite za 
	rezultatom koji se nalazi na stranici br. 122, npr: b,d,e,c,e,d,a,d,… 
*/

void ispisi_poruku()
{
	cout << "a: Evo nas u funkciju 'ispisi_poruku' " << endl;
	cout << "b: Kraj - izlazak iz funkcije 'ispisi_poruku' " << endl;
}

void main()
{
	//rezultat: a, b, c, a, b, a, b, d, a, b;

	ispisi_poruku();    //poziv funkcije 
	cout << "c: Evo nas u funkciji main" << endl;
	ispisi_poruku();    //poziv funkcije 
	ispisi_poruku();    //poziv funkcije 
	cout << "d: Evo nas OPET u funkciji main" << endl;
	ispisi_poruku();    //poziv funkcije 
}