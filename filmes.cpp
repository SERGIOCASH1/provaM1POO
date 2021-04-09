#include "filmes.h"

string Filmes::getEstudio() const
{
    return estudio;
}

void Filmes::setEstudio(const string &value)
{
    estudio = value;
}

double Filmes::getBilheteria() const
{
    return bilheteria;
}

void Filmes::setBilheteria(double value)
{
    bilheteria = value;
}

Filmes::~Filmes()
{

}

Filmes::Filmes()
{

}
