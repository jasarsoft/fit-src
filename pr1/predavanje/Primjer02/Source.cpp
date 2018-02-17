//upotreba operatora sizeof

#include <iostream>
using namespace std;

void main(){
	
	cout << "Velicina int je:\t" << sizeof(int) << " bytes.\n";
	cout << "Velicina short int je:\t" << sizeof(short) << " bytes.\n";
	cout << "Velicina long int je:\t" << sizeof(long) << " bytes.\n";
	cout << "Velicina char je:\t" << sizeof(char) << " bytes.\n";
	cout << "Velicna float je:\t" << sizeof(float) << " bytes.\n";
	cout << "Velicina double je:\t" << sizeof(double) << " bytes.\n";

	system("pause");
}