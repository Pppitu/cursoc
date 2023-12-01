#pragma once

#include <Windows.h>
#include <list>
#include "msclr/marshal_cppstd.h"// Incluimos la libreriapara convertir de std::string a String^

using namespace std;
using namespace System;

ref class Libro {

private:
	int    libro_id;
	String^ titulo;
	String^ autor;
	double precio;

public:
	Libro(int id, String^ tit, String^ aut, double prec);
	int getLibroId();
	String^ getTitulo();
	String^ getAutor();
	double getPrecio();
	void printData();

	void setid(int id);
	void setTitulo(String^ tit);
	void setAutor(String^ aut);
	void setPrecio(double prec);

};


