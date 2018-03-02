#include <iostream>
using namespace std;

/*
	Koje ce poruke ispisati sljedeci program? Zapisite redoslijed poruka i usporedite za 
	rezultatom koji se nalazi na stranici br. 113, npr: b,d,e,c,e,d,a,d,… 
*/

//REZULTAT: a, b, c, d, d, b, e, b, d

void ispisi_poruku1()
{
	cout << "b: Evo nas u funkciju 'ispisi_poruku1' " << endl;
}

void ispisi_poruku2()
{
	cout << "d: Evo nas u funkciju 'ispisi_poruku2' " << endl;
}

void main()
{
	cout << "a: Evo nas u funkciji main" << endl;

	ispisi_poruku1();

	cout << "c: Evo nas OPET u funkciji main" << endl;
	ispisi_poruku2();
	ispisi_poruku2();
	ispisi_poruku1();

	cout << "e: Evo nas OPET u funkciji main" << endl;

	ispisi_poruku1();
	ispisi_poruku2();
}