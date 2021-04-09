#ifndef CHECKLISTJOGOS_H
#define CHECKLISTJOGOS_H
#include "jogos.h"
#include <vector>

class CheckListJogos: public Jogos
{
private:
    vector <Jogos> vetorJogos;
public:
    CheckListJogos();

    void adicionarJogo(Jogos jogo);
    void removerJogo(string nome);
    void pesquisarJogo(string jogo);
    void listaJogo();
};

#endif // CHECKLISTJOGOS_H
