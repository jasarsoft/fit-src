#include <iostream>
#include <iomanip>
using namespace std;

/*
	 Ako  su  vrijednosti  varijabli  R1=2.0,  R2=3.0,  R3=4.0, a  vrijednosti  varijabli  I1=4,  I2=5  i  I3=8,  
	 izracunajte  vrijednosti  sljedeæih izraza, te obrazlozite dobivene rezultate!: 
 
	a=R1+R2+R3 
	b=I3/3		
	c=I3/3.0  
	d=(R2+R1)*I1  
	e=I3/I2*5.1  
	f=I1++  
	g=++I2 
	h=R1++  
	i=(I2<R2)&&(R2>R1) 
	j=(I3==I1)||(R2>=R1) 
	k=(I2!=R2)||(R2<=R1)
*/

int main()
{
	int I1 = 4, I2 = 5, I3 = 8;
	float R1 = 2.0, R2 = 3.0, R3 = 4.0;

	float a, h;
	int b, f, g;
	double c, d, e;
	bool i, j, k;

	a = R1 + R2 + R3;
	cout << "Rezultat izraza R1+R2+R3 je " << a << endl;

	b = I3 / 3;
	cout << "Rezultat izraza I3/3 je " << b << endl;

	c = I3 / 3.0;
	cout << "Rezultat izraza I3/3.0 je " << c << endl;

	d = (R2 + R1)*I1;
	cout << "Rezultat izraza (R2+R1)*I1 je " << d << endl;

	e = I3 / I2 * 5.1;
	cout << "Rezulat izraza (I3/I2)*5.1 je " << e << endl;

	f = I1++;
	cout << "Rezulat izraza I1++ je " << f << endl;

	g = ++I2;
	cout << "Rezulat izraza ++I2  je " << g << endl;

	h = R1++;
	cout << "Rezulat izraza R1++  je " << h << endl;

	i = (I2 < R2) && (R2 > R1);
	cout << "Rezulat izraza (I2 < R2) && (R2 > R1) je " << boolalpha << i << endl;

	j = (I3 == I1) || (R2 >= R1);
	cout << "Rezulat izraza (I3 == I1) || (R2 >= R1) je " << boolalpha << j << endl;

	k = (I2 != R2) || (R2 <= R1);
	cout << "Rezulat izraza (I2 != R2) || (R2 <= R1) je " << boolalpha << k << endl;

	system("pause");
	return 0;
}