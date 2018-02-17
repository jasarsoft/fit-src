#include <iostream>
using namespace std;

void fff(int in1, int in2);
void ffff(int in1, int &in2);
void fffff(int &in1, int &in2);

int main()
{
	int brojac = 7, indeks = 12;

	cout << "Vrijednosti su ";
	cout << "\t" << brojac;
	cout << "\t" << indeks << endl;

	fff(brojac, indeks);
	cout << "Vrijednosti su \t" << brojac << "\t" << indeks << endl << endl;

	brojac = 7, indeks = 12;
	cout << "Vrijednosti su \t" << brojac << "\t" << indeks << endl;
	ffff(brojac, indeks);
	cout << "Vrijednosti su \t" << brojac << "\t" << indeks << endl << endl;

	brojac = 7, indeks = 12;
	cout << "Vrijednosti su \t" << brojac << "\t" << indeks << endl;
	fffff(brojac, indeks);
	cout << "Vrijednosti su \t" << brojac << "\t" << indeks << endl << endl;

	system("pause");
	return 0;
}

void fff(int in1, int in2)
{
	in1 = in1 + 100;
	in2 = in2 + 100;
	cout << "Vrijednosti su \t" << in1 << "\t" << in2 << endl;
}

void ffff(int in1, int &in2)
{
	in1 = in1 + 100;
	in2 = in2 + 100;
	cout << "Vrijednosti su \t" << in1 << "\t" << in2 << endl;
}

void fffff(int &in1, int &in2)
{
	in1 = in1 + 100;
	in2 = in2 + 100;
	cout << "Vrijednosti su \t" << in1 << "\t" << in2 << endl;
}