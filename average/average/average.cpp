#include <iostream>
using namespace std;

int main() {
    const int num_estudiantes = 5;
    float notas[num_estudiantes];
    float suma = 0.0;

    for (int i = 0; i < num_estudiantes; ++i) {
        cout << "Nota del alumno " << 1 + i << ": " << endl;
        cin >> notas[i];
        suma += notas[i];
    }
    cout << "Media = " << suma / num_estudiantes;
    return 0;
}
