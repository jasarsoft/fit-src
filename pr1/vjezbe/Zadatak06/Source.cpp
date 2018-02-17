/*
	Dvije  uobicajene  skale  za  mjerenje  temperature  su  Fahrenheit  i  Celsius. 
	Tačka kljucanja vode je 212˚F ill 100˚C. Tačka zamrzavanja vode je 32 ˚F ili 0˚C. 
	Ako pretpostavimo da je odnos izmedju dvije skale moguce izraziti sljedecim izrazom  
	F= 5/9C + 32 napravite program koji ce konvertirati temperaturu izrazenu u stupnjevima 
	Celsiusa u temperaturu izrazenu u  stupnjevima Fahrenheita. 
*/

#include <iostream>
using namespace std;

int main()
{
	float	tempC, //temperatura u Celzijusima
			tempF; //temperatura u Fahrenheitma

	cout << "Unesite temperaturu u C: ";
	cin >> tempC;

	tempF = 9.0 * tempC / 5.0 + 32; //napomena vodite racuna o cjelobrojnom djeljenju
	cout << "Temperatura u Farenheitima iznos " << tempF << endl;

	system("pause");
	return 0;
}