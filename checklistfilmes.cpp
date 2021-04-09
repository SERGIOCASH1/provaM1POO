#include "checklistfilmes.h"
int filmesCadastrados;
CheckListFilmes::CheckListFilmes()
{

}

void CheckListFilmes::adicionarFilme(Filmes filme)
{

    vetorFilmes.emplace_back(filme);
    filmesCadastrados = filmesCadastrados + 1;

}

void CheckListFilmes::removerFilme(string nome)
{
    int tam = vetorFilmes.size();

        for (int i =0; i<tam; i++){
            if(nome == vetorFilmes[i].getNome()){
                cout << "Filme (" << vetorFilmes[i].getNome() << ") removido.\n";

                vetorFilmes[i].setNome("-");
                vetorFilmes[i].setEstudio("");
                vetorFilmes[i].setGenero("");
                vetorFilmes[i].setBilheteria(0);
                vetorFilmes[i].setDataLancamento("");
                filmesCadastrados = filmesCadastrados - 1;
            }
        }
}

void CheckListFilmes::pesquisarFilme(string nome)
{
    int tam = vetorFilmes.size();
    bool existeFilme = false;

    for (int i =0; i<tam; i++){
        if(nome == vetorFilmes[i].getNome()){
            cout << "Filme: " << vetorFilmes[i].getNome() << endl;
            cout << "Genero: " << vetorFilmes[i].getGenero() << endl;
            cout << "Estudio: " << vetorFilmes[i].getEstudio() << endl;
            cout << "Data de lancamento: " << vetorFilmes[i].getDataLancamento() << endl;
            cout << "Bilheteria: " << vetorFilmes[i].getBilheteria() << endl;
            existeFilme = true;
            break;
        }
    }
    if (existeFilme == false){
        cout << "Nao ha filmes cadastrados com esse nome!\n";
    }
}

void CheckListFilmes::listaFilme()
{
    int tam = vetorFilmes.size();
    string nome = "";
    for (int i =0; i<tam; i++){
        if(nome == vetorFilmes[i].getNome()){
            cout << "Filme: " << vetorFilmes[i].getNome() << endl;
            cout << "Genero: " << vetorFilmes[i].getGenero() << endl;
            cout << "Estudio: " << vetorFilmes[i].getEstudio() << endl;
            cout << "Data de lancamento: " << vetorFilmes[i].getDataLancamento() << endl;
            cout << "Bilheteria: " << vetorFilmes[i].getBilheteria() << "\n"<< endl;
        }
    }
    if (filmesCadastrados != 0){
        cout << "Total de filmes cadastrados: " << filmesCadastrados << "\n";
    }
    else{
        cout << "Nao ha filmes cadastrados! \n";
    }
}
