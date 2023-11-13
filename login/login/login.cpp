#include <iostream>

using namespace std;

bool verificaHumano() {
    const int resultado = 14;
    cout << "Introduzca el resultado de 5 + 9\n";
    int resul;
    cin >> resul;
    if (resultado == resul) {
        return true;
    }
    return false;
}

int main() {
    const int max_intentos = 3;
    int intentos = 0;
    while (!verificaHumano()) {
        intentos++;
        cout << "Valor incorrecto\n";
        if (max_intentos == intentos) {
            cout << "Demasiados errores. Intentalo mas tarde\n";
            return 1;
        }
        cout << "Pulsa una tecla e intentalo de nuevo\n";
        system("pause");
    }
    cout << "Muy bien\n";
    return 0;
}

