//zbrajanje

#include <iostream>
using namespace std;

int main() {
	int suma = 0;
	
	for (int broj = 0; broj < 100; broj += 2)
		suma += broj;

	cout << "Suma je " << suma << endl;
	return 0;
}