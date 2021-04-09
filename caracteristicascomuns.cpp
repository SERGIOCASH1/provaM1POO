#include "caracteristicascomuns.h"

string CaracteristicasComuns::getNome() const
{
    return nome;
}

void CaracteristicasComuns::setNome(const string &value)
{
    nome = value;
}

string CaracteristicasComuns::getDataLancamento() const
{
    return dataLancamento;
}

void CaracteristicasComuns::setDataLancamento(const string &value)
{
    dataLancamento = value;
}

string CaracteristicasComuns::getGenero() const
{
    return genero;
}

void CaracteristicasComuns::setGenero(const string &value)
{
    genero = value;
}

CaracteristicasComuns::~CaracteristicasComuns()
{

}

CaracteristicasComuns::CaracteristicasComuns()
{

}
