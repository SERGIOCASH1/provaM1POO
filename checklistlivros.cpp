#include "checklistlivros.h"
int livrosCadastrados;
CheckListLivros::CheckListLivros()
{

}

void CheckListLivros::adicionarLivro(Livros livro)
{
    vetorLivros.emplace_back(livro);
    livrosCadastrados = livrosCadastrados + 1;
}

void CheckListLivros::removerLivro(string nome)
{
    int tam = vetorLivros.size();

        for (int i =0; i<tam; i++){
            if(nome == vetorLivros[i].getNome()){
                cout << "Livro (" << vetorLivros[i].getNome() << ") removido.\n";

                vetorLivros[i].setNome("-");
                vetorLivros[i].setAutor("");
                vetorLivros[i].setGenero("");
                vetorLivros[i].setExemplaresVendidos(0);
                vetorLivros[i].setDataLancamento("");
                livrosCadastrados = livrosCadastrados - 1;
            }
        }
}

void CheckListLivros::pesquisarLivro(string nome)
{
    int tam = vetorLivros.size();
    bool existeLivro = false;

    for (int i =0; i<tam; i++){
        if(nome == vetorLivros[i].getNome()){
            cout << "Livro: " << vetorLivros[i].getNome() << endl;
            cout << "Genero: " << vetorLivros[i].getGenero() << endl;
            cout << "Autor: " << vetorLivros[i].getAutor() << endl;
            cout << "Data de lancamento: " << vetorLivros[i].getDataLancamento() << endl;
            cout << "Numero de unidades vendidas: " << vetorLivros[i].getExemplaresVendidos() << endl;
            existeLivro = true;
            break;
        }
    }
    if (existeLivro == false){
        cout << "Nao ha livros cadastrados com esse nome!\n";
    }
}

void CheckListLivros::listaLivro()
{
    int tam = vetorLivros.size();

    string nome = "-";
    for (int i =0; i<tam; i++){
        if(nome == vetorLivros[i].getNome()){
        }
        else{
            cout << "Livro: " << vetorLivros[i].getNome() << endl;
            cout << "Genero: " << vetorLivros[i].getGenero() << endl;
            cout << "Autor: " << vetorLivros[i].getAutor() << endl;
            cout << "Data de lancamento: " << vetorLivros[i].getDataLancamento() << endl;
            cout << "Numero de unidades vendidas:: " << vetorLivros[i].getExemplaresVendidos() << "\n"<< endl;
        }
    }
    if (livrosCadastrados != 0){
        cout << "Total de livros cadastrados: " << livrosCadastrados << "\n";
    }
    else{
        cout << "Nao ha livros cadastrados! \n";
    }
}
