#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>
#include "Alumno.h"
#include <list>

using namespace std;

void clearScreen() {
    printf("\033[2J\033[1;1H");
}

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
    clearScreen();
    for (Alumno alumno : alumnosLst) {
        alumno.pintaDatos();
    }
    string nombre;
}