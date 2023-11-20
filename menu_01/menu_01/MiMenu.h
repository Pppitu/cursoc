#ifndef MIMENU_H
#define MIMENU_H

#include <string>
using namespace std;

class MiMenu {
private:
	string nombre;

protected:

public:
	void presentaMenu();
	bool procesaOpcion(int opcion);
};

#endif