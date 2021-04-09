#include "jogos.h"

string Jogos::getProdutora() const
{
    return produtora;
}

void Jogos::setProdutora(const string &value)
{
    produtora = value;
}

double Jogos::getExemplaresVendidos() const
{
    return exemplaresVendidos;
}

void Jogos::setExemplaresVendidos(double value)
{
    exemplaresVendidos = value;
}

Jogos::~Jogos()
{

}

Jogos::Jogos()
{

}
