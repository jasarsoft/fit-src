/*
	Pero Peric instalira kabl za kompaniju Metro City Cable Company. Za svaku 
	instalaciju naplacuje se osnovna  usluga u iznosu od 25,00 $ i dodatna usluga u iznosu 
	od  2,00$  za  svaki  metar  postavljenog  kabla.  Potrebno  je  napraviti  program  koji  æe 
	racunati  ukupnu  dobit  od  Perinog  rada  u  toku  mjeseca.  Ako  je Pero  je  instalirao  263 
	kilometra kabla na 27 razlicitih lokacija u toku mjeseca januara koliku je dobit ostvario za 
	svoju kompaniju? (Odgovor: 526 675$) 
*/

#include <iostream>
using namespace std;

int main()
{
	const double	OSNOVNA_USLUGA = 25.00, //cijena osnovne usluge po instalaciji
					CIJENA_PO_METRU = 2.00;	//jedinicna cijena kabla

	int instalacije; //broj instalacija
	double kilometarKabla, metarKabla, dobit; //kilometara postavljenog kabla

	cout << "Unesite broj instalcija i broj kilometara upotrebljenog kabla.\n";
	cin >> instalacije >> kilometarKabla;

	metarKabla = 1000 * kilometarKabla;
	dobit = instalacije * OSNOVNA_USLUGA + CIJENA_PO_METRU * metarKabla;

	cout << "Dobit = " << dobit << "$\n";

	system("pause");
	return 0;
}