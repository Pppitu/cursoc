#include <iostream>
using namespace std;

int main() {
    cout << "introduce un número entero\n";
    int num;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cout << string(num - i, '*') << endl;
    }
}
