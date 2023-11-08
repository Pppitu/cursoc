#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float cat_01, cat_02;
    cout << "Primer cateto: \n";
    cin >> cat_01;

    cout << "\nSegundo cateto:\n";
    cin >> cat_02;

    cout << "Hipotenusa (hipot): " << hypot(cat_01, cat_02) << endl;
    cout << "Hipotenusa: (sqrt(c1 * c1 + c2 * c2))" << sqrt(cat_01 * cat_01 + cat_02 * cat_02) << endl;
    system("pause");
    return 0;
}
