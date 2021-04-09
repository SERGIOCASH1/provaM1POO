#ifndef CHECKLISTLIVROS_H
#define CHECKLISTLIVROS_H
#include "livros.h"
#include <vector>

class CheckListLivros: public Livros
{
private:
    vector <Livros> vetorLivros;
public:
    CheckListLivros();

    void adicionarLivro(Livros livro);
    void removerLivro(string nome);
    void pesquisarLivro(string nome);
    void listaLivro();
};

#endif // CHECKLISTLIVROS_H
