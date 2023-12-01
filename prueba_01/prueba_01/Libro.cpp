#include "Libro.h"

Libro::Libro(int id, String^ tit, String^ aut, double prec) {
	libro_id = id;
	titulo = tit;
	autor = aut;
	precio = prec;
}

int Libro::getLibroId() {
	return libro_id;
}

String^ Libro::getTitulo() {
	return titulo;
}

String^ Libro::getAutor() {
	return autor;
}

double Libro::getPrecio() {
	return precio;
}

void Libro::setid(int id) {
	libro_id = id;
}
void Libro::setTitulo(String^ tit) {
	titulo = tit;
}
void Libro::setAutor(String^ aut) {
	autor = aut;

}
void Libro::setPrecio(double prec) {
	precio = prec;
}


void Libro::printData() {
	//cout << "--------------------------------------\n";
	//cout << "Titulo: " << titulo << "\n";
	//cout << "Autor:  " << autor << "\n";
	//cout << "Precio: " << precio << "\n";
	//cout << "--------------------------------------\n";
}

