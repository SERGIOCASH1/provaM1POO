#ifndef LIVROS_H
#define LIVROS_H
#include "caracteristicascomuns.h"

class Livros: public CaracteristicasComuns
{
private:
    string autor;
    double exemplaresVendidos;
public:
    Livros();

    string getAutor() const;
    void setAutor(const string &value);
    double getExemplaresVendidos() const;
    void setExemplaresVendidos(double value);
};

#endif // LIVROS_H
