#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>
#include "MiMenu.h";

using namespace std;

int main() {
    setlocale(LC_ALL, "ES_es.UTF-8");
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    MiMenu mmenu;
    int optMenu;
    while (true) {
        mmenu.presentaMenu();
        cin >> optMenu;
        if (!mmenu.procesaOpcion(optMenu)) {
            return 0;
        }
        system("pause");
    }

}