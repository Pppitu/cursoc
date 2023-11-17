#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>
#include "Alumno.h"
#include <list>

using namespace std;

int main() {
    setlocale(LC_ALL, "ES_es.UTF-8");
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    list<Alumno> alumnosLst;
    for (int i = 0; i < 5; i++) {
        Alumno alumno;
        alumno.pideDatos();
        alumnosLst.push_back(alumno);
    }
    system("cls");
    for (Alumno alumno : alumnosLst) {
        alumno.pintaDatos();
    }
    string nombre;
}