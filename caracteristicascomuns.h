#ifndef CARACTERISTICASCOMUNS_H
#define CARACTERISTICASCOMUNS_H
#include <iostream>
using namespace std;

class CaracteristicasComuns
{
private:
    string nome;
    string dataLancamento;
    string genero;
public:
    CaracteristicasComuns();

    string getNome() const;
    void setNome(const string &value);
    string getDataLancamento() const;
    void setDataLancamento(const string &value);
    string getGenero() const;
    void setGenero(const string &value);

    ~CaracteristicasComuns();
};

#endif // CARACTERISTICASCOMUNS_H
