#include <iostream>

using namespace std;

bool verificaHumano() {
    cout << "Introduzca el resultado de 5 + 9\n";
    int resul;
    cin >> resul;
    if (14 == resul) {
        return true;
    }
    return false;
}

int main() {
    int intentos = 0;
    while (not verificaHumano()) {
        intentos++;
        cout << "Valor incorrecto\n";
        if (5 == intentos) {
            cout << "Demasiados errores. Intentalo mas tarde\n";
            return 1;
        }
        cout << "Pulsa una tecla e intentalo de nuevo\n";
        system("pause");
    }
    cout << "Muy bien\n";
    return 0;
}

