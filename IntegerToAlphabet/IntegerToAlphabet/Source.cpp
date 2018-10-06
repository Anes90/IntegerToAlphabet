#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int broj = 0;
	char charBroj[20] = "0000000000000000000";
	cout << "Unesite neki broj: ";
	cin >> broj;
	//uneseni broj konvertujemo u niz karaktera (po bazi 10)
	//nakon konverzije broj ce biti pohranjen u niz charBroj
	_itoa_s(broj, charBroj, 10); //_itoa_s(broj,charBroj,10);
								 //ispisujemo konvertovanu cjelobrojnu vrijednost
	cout << "Unijeli ste broj: " << charBroj << endl;
	system("pause>0");
}