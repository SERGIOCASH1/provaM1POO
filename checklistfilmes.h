#ifndef CHECKLISTFILMES_H
#define CHECKLISTFILMES_H
#include "filmes.h"
#include <vector>

class CheckListFilmes: public Filmes
{
private:
    vector <Filmes> vetorFilmes;
public:
    CheckListFilmes();

    void adicionarFilme(Filmes filme);
    void removerFilme(string nome);
    void pesquisarFilme(string filme);
    void listaFilme();
};

#endif // CHECKLISTFILMES_H
