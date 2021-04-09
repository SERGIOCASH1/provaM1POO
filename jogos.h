#ifndef JOGOS_H
#define JOGOS_H
#include "caracteristicascomuns.h"

class Jogos: public CaracteristicasComuns
{
private:
    string produtora;
    double exemplaresVendidos;
public:
    Jogos();

    string getProdutora() const;
    void setProdutora(const string &value);
    double getExemplaresVendidos() const;
    void setExemplaresVendidos(double value);

    ~Jogos();
};

#endif // JOGOS_H
