#include <iostream>

int main() {
	double a = 0.0; //fontos double -re állítani rögtön az elején, vagy az osztás sehogy nem fog törtet visszaadni, hiába double a hanyados!
	double b = 0.0;

	std::cout << "Kerek ket egesz szamot: " << std::endl;

	std::cin >> a;
	std::cin >> b;

	//osszeadas
	int osszeg = 0;
	osszeg = a + b;
	std::cout << "A ket szam osszege: " << osszeg << std::endl;

	//különbség
	int kulonbseg = 0;
	if (a > b) {
		kulonbseg = a - b;
		std::cout << "A ket szam kulonbsege: " << kulonbseg << std::endl;
	}
	else {
		b > a;
		kulonbseg = b - a;
		std::cout << "A ket szam kulonbsege: " << kulonbseg << std::endl;
	}
	
	//szorzat
	int szorzat = 0;

	if (a != 0 || b != 0) { //fontos a vagy!
		szorzat = a * b;
		std::cout << "A ket szam szorzata: " << szorzat << std::endl;
	}
	else {
		std::cout << "A szorzat egyik tagja nulla, kerem futtassa ujra a programot helyes szamokkal!" << std::endl;
	}

	//hanyados
	long double hanyados = 0.0;

	if (a == 0 || b == 0) { //fontos a vagy!
		std::cout << "Nullaval nem lehet osztani, kerem futtassa ujra a programot helyes szamokkal!" << std::endl;
	}
	else {
		hanyados = a / b;
		std::cout << "Az a / b osztas eredmenye: " << hanyados << std::endl;
	}
	
	return 0;

}
