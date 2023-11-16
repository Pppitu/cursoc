#include "Alumno.h"
#include <iostream>
#include <string>

void Alumno::pideDatos() {
	cout << "Introduzca el nombre del alumno: ";
	cin >> nombre;
	cout << "Introduzca la nota del alumno: ";
	cin >> nota;
};

void Alumno::pintaDatos() {
	cout << "Alumno: " << nombre << "  nota: " << nota << endl;
};

