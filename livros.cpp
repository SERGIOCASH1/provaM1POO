#include "livros.h"

string Livros::getAutor() const
{
    return autor;
}

void Livros::setAutor(const string &value)
{
    autor = value;
}

double Livros::getExemplaresVendidos() const
{
    return exemplaresVendidos;
}

void Livros::setExemplaresVendidos(double value)
{
    exemplaresVendidos = value;
}

Livros::Livros()
{

}
