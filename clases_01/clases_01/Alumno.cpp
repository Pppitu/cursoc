#include "Alumno.h"
#include <iostream>
#include <string>

void Alumno::pideDatos() {
	cout << "Introduzca el nombre del alumno: ";
	getline(cin >> ws, nombre);
	cout << "Introduzca la nota del alumno: ";
	cin >> nota;
	system("pause");
};

void Alumno::pintaDatos() {
	cout << "Alumno: " << nombre << "  nota: " << nota << endl;
};

