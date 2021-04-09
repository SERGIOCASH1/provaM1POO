#ifndef FILMES_H
#define FILMES_H
#include "caracteristicascomuns.h"

class Filmes: public CaracteristicasComuns
{
private:
    string estudio;
    double bilheteria;
public:
    Filmes();

    string getEstudio() const;
    void setEstudio(const string &value);
    double getBilheteria() const;
    void setBilheteria(double value);

    ~Filmes();
};

#endif // FILMES_H
