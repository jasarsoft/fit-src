#include <iostream>
using namespace std;

/*
	Deklarisite varijable a1, a2, a3, a4, a5 i a6 tipa char. Dodijelite u svaku varijablu po 
	jedno slovo iz rijeci „Mostar“. Zatim ispisite tu rijec na ekran u sljedecim oblicima: 
	
	Mostar 
	
	M-o-s-t-a-r 
	
	M 
	o 
	s 
	t 
	a 
	r 
	
	M 
	 o 
	  s 
	   t 
		a 
		  r 
*/

int main()
{
	char a1, a2, a3, a4, a5, a6;

	a1 = 'M';
	a2 = 'o';
	a3 = 's';
	a4 = 't';
	a5 = 'a';
	a6 = 'r';

	cout << a1 << a2 << a3 << a4 << a5 << a6 << endl;
	cout << a1 << "-" << a2 << "-" << a3 << "-" << a4 << "-" << a5 << "-" << a6 << endl;
	cout << a1 << endl << a2 << endl << a3 << endl << a4 << endl << a5 << endl << a6 << endl;
	
	cout << a1 << endl;
	cout << " " << a2 << endl;
	cout << "  " << a3 << endl;
	cout << "   " << a4 << endl;
	cout << "    " << a5 << endl;
	cout << "     " << a6 << endl;

	system("pause");
	return 0;
}