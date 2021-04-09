#include "checklistjogos.h"
int jogosCadastrados;
CheckListJogos::CheckListJogos()
{

}

void CheckListJogos::adicionarJogo(Jogos jogo)
{
    vetorJogos.emplace_back(jogo);
    jogosCadastrados = jogosCadastrados + 1;
}

void CheckListJogos::removerJogo(string nome)
{
    int tam = vetorJogos.size();

        for (int i =0; i<tam; i++){
            if(nome == vetorJogos[i].getNome()){
                cout << "Jogo (" << vetorJogos[i].getNome() << ") removido.\n";

                vetorJogos[i].setNome("-");
                vetorJogos[i].setProdutora("");
                vetorJogos[i].setGenero("");
                vetorJogos[i].setExemplaresVendidos(0);
                vetorJogos[i].setDataLancamento("");
                jogosCadastrados = jogosCadastrados - 1;
            }
        }
}

void CheckListJogos::pesquisarJogo(string jogo)
{
    int tam = vetorJogos.size();
    bool existeJogo = false;

    for (int i =0; i<tam; i++){
        if(jogo == vetorJogos[i].getNome()){
            cout << "Jogo: " << vetorJogos[i].getNome() << endl;
            cout << "Genero: " << vetorJogos[i].getGenero() << endl;
            cout << "Produtora: " << vetorJogos[i].getProdutora() << endl;
            cout << "Data de lancamento: " << vetorJogos[i].getDataLancamento() << endl;
            cout << "Numero de unidades vendidas: " << vetorJogos[i].getExemplaresVendidos() << endl;
            existeJogo = true;
            break;
        }
    }
    if (existeJogo == true){
        cout << "Nao ha jogos cadastrados com esse nome!\n";
    }
}

void CheckListJogos::listaJogo()
{
    int tam = vetorJogos.size();

    string nome = "-";
    for (int i =0; i<tam; i++){
        if(nome == vetorJogos[i].getNome()){         
        }
        else{
            cout << "Jogo: " << vetorJogos[i].getNome() << endl;
            cout << "Genero: " << vetorJogos[i].getGenero() << endl;
            cout << "Produtora: " << vetorJogos[i].getProdutora() << endl;
            cout << "Data de lancamento: " << vetorJogos[i].getDataLancamento() << endl;
            cout << "Numero de unidades vendidas:: " << vetorJogos[i].getExemplaresVendidos() << "\n"<< endl;
        }

    }
    if (jogosCadastrados != 0){
        cout << "Total de jogos cadastrados: " << jogosCadastrados << "\n";
    }
    else{
        cout << "Nao ha jogos cadastrados! \n";
    }
}

