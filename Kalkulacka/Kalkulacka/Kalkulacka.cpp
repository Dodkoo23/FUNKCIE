#include <iostream>
using namespace std;



void pluss(float a, float b) {
	float vysledok = a + b;
	cout << "Vysledok = " << vysledok << endl;
}
void minuss(float a, float b) {
	float vysledok = a - b;
	cout << "Vysledok = " << vysledok << endl;
}
void krat(float a, float b) {
	float vysledok = a * b;
	cout << "Vysledok = " << vysledok << endl;
}
void deleno(float a, float b) {
	float vysledok = a / b;
	cout << "Vysledok = " << vysledok << endl;
}
int main() {

	int zaciatok = 10;
	while (zaciatok == 10) {
		cout << "KALKULACKA" << endl;
		float a;
		float b;
		char operátor;
		cout << "Zadaj prve cislo : " << endl;
		cin >> a;
		cout << " Zadaj operator : " << endl;
		cin >> operátor;
		cout << "Zadaj druhe cislo : " << endl;
		cin >> b;
		int z = operátor;

		if (z == 47 && b == 0) {
			cout << "NULOU SA NEDA DELIT";
		}
		else {
			switch (z) {
			case 43:
				pluss(a, b);
				break;
			case 42:
				krat(a, b);
				break;
			case 45:
				minuss(a, b);
				break;
			case 47:
				deleno(a, b);
				break;
			default:
				cout << "ZADAL SI ZLY OPERATOR" << endl;
			}
			cout << "Chces dalsi priklad? " << endl;
			cout << "a.) ANO    b.)NIE" << endl;
			char odpoved;
			cin >> odpoved;
			int zaciatok = odpoved;


		}
	}
}