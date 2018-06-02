#include<iostream>
using namespace std;

/*
	struktura tacka
*/

struct Tacka {
	float x;
	float y;
}/*t1, t2*/;

void ispis(Tacka t) {
	cout << "t.x = " << t.x << "\n";
	cout << "t.y = " << t.y << endl;
	cout << "sizeof(t) = " << sizeof(t) << endl;
	cout << "&t = " << &t << endl;
}

Tacka suma(Tacka t1, Tacka t2) {
	float x = t1.x + t2.x;
	float y = t1.y + t2.y;

	Tacka tmp = { x, y }; //tmp.x = x; tmp.y = y;
	return tmp;
}


int main()
{
	Tacka t1;
	Tacka t2;

	t1.x = 1.2F;
	t1.y = 1.2F;
	t2.x = 1.5F;
	t2.y = -0.8F;

	Tacka t3 = suma(t1, t2);
	ispis(t3);

	system("pause");
	return 0;
}