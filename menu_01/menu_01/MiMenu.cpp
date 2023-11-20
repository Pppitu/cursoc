#include "MiMenu.h"
#include "Utils.h"
#include <iostream>

using namespace std;

void MiMenu::presentaMenu() {
	Utils::clearScreen();
	if (!nombre.empty()) {
		cout << "------- Logged as: " << nombre << " -------\n";
	}
	cout << "1 - Login \n";
	cout << "2 - Wellcome \n";
	cout << "3 - Logout \n";
	cout << "4 - Terminate \n";
}

bool MiMenu::procesaOpcion(int opcion) {
	Utils::clearScreen();
	switch (opcion) {
	case 1:
		cout << "Nombre: \n";
		cin.clear();
		getline(cin >> ws, nombre);
		break;
	case 2:
		if (!nombre.empty()) {
			cout << "Bienvenido " << nombre << "\n";
		} else {
			cout << "primero hay que hacer login\n";
		}
		break;
	case 3:
		if (!nombre.empty()) {
			nombre = "";
		} else {
			cout << "primero hay que hacer login\n";
		}
		break;
	case 4:
		return false;
		break;
	default:
		cout << "Esta opcion no esta prevista\n";
	}
	return true;
}