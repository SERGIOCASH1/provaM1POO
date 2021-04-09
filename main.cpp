#include <QCoreApplication>
#include "checklistfilmes.h"
#include "checklistjogos.h"
#include "checklistlivros.h"
int opcao;


void listarLivro(CheckListLivros &CLL){
    CLL.listaLivro();
}
void listarJogo(CheckListJogos &CLJ){
    CLJ.listaJogo();
}
void listarFilmes(CheckListFilmes &CLF){
    CLF.listaFilme();
}

void removerDadosLivro(CheckListLivros &CLL){
    string nome;

    cout << "Insira o nome do Livro: ";
    cin >> nome;

    CLL.removerLivro(nome);
}
void removerDadosJogo(CheckListJogos &CLJ){
    string nome;

    cout << "Insira o nome do Jogo: ";
    cin >> nome;

    CLJ.removerJogo(nome);
}
void removerDadosFilme(CheckListFilmes &CLF){
    string nome;

    cout << "Insira o nome do Filme: ";
    cin >> nome;

    CLF.removerFilme(nome);
}

void pesquisarLivro(CheckListLivros &CLL){
    string nome;

    cout << "Insira o nome do Livro: ";
    cin >> nome;

    CLL.pesquisarLivro(nome);
}
void pesquisarJogo(CheckListJogos &CLJ){
    string nome;

    cout << "Insira o nome do Jogo: ";
    cin >> nome;

    CLJ.pesquisarJogo(nome);
}
void pesquisarFilme(CheckListFilmes &CLF){
    string nome;

    cout << "Insira o nome do Filme: ";
    cin >> nome;

    CLF.pesquisarFilme(nome);
}

void setDadosLivro(CheckListLivros &CLL){
    string nome;
    string genero;
    string data;
    string autor;
    double exemplaresVendidos;

    Livros livro;

    cout << "Insira o nome do livro: ";
    cin >> nome;
    cout << "Insira o autor do livro: ";
    cin >> autor;
    cout << "Insira o genero do livro: ";
    cin >> genero;
    cout << "Insira o numero de exemplares vendidos do livro: ";
    cin >> exemplaresVendidos;
    cout << "Insira a data de lancamento do livro: ";
    cin >> data;

    livro.setNome(nome);
    livro.setExemplaresVendidos(exemplaresVendidos);
    livro.setAutor(autor);
    livro.setGenero(genero);
    livro.setDataLancamento(data);

    CLL.adicionarLivro(livro);
}
void setDadosJogo(CheckListJogos &CLJ){
    string nome;
    string genero;
    string data;
    string produtora;
    double exemplaresVendidos;

    Jogos jogo;

    cout << "Insira o nome do jogo: ";
    cin >> nome;
    cout << "Insira a produtora do jogo: ";
    cin >> produtora;
    cout << "Insira o genero do jogo: ";
    cin >> genero;
    cout << "Insira o numero de exemplares vendidos do jogo: ";
    cin >> exemplaresVendidos;
    cout << "Insira a data de lancamento do jogo: ";
    cin >> data;

    jogo.setNome(nome);
    jogo.setExemplaresVendidos(exemplaresVendidos);
    jogo.setProdutora(produtora);
    jogo.setGenero(genero);
    jogo.setDataLancamento(data);

    CLJ.adicionarJogo(jogo);
}
void setDadosFilme(CheckListFilmes &CLF){
    string nome;
    string estudio;
    string genero;
    string data;
    double bilheteria;

    Filmes filme;

    cout << "Insira o nome do filme: ";
    cin >> nome;
    cout << "Insira o estudio do filme: ";
    cin >> estudio;
    cout << "Insira o genero do filme: ";
    cin >> genero;
    cout << "Insira a bilheteria do filme: ";
    cin >> bilheteria;
    cout << "Insira a data de lancamento do filme: ";
    cin >> data;

    filme.setNome(nome);
    filme.setBilheteria(bilheteria);
    filme.setEstudio(estudio);
    filme.setGenero(genero);
    filme.setDataLancamento(data);

    CLF.adicionarFilme(filme);
}

void opcaoJogo(CheckListJogos &CLJ){
    int opcao;
    while(true){
        cout << "Cadastrar Jogo         (0)" << endl;
        cout << "Pesquisar Jogo         (1)" << endl;
        cout << "Remover   Jogo         (2)" << endl;
        cout << "Listar    Jogo         (3)" << endl;
        cout << "Voltar               (any)" << endl;

        cin >> opcao;

        if(opcao == 0){
            setDadosJogo(CLJ);
        }
        else if(opcao == 1){
            pesquisarJogo(CLJ);
        }
        else if(opcao == 2){
            removerDadosJogo(CLJ);
        }
        else if(opcao == 3){
            listarJogo(CLJ);
        }
        else{
            break;
        }
    }
}
void opcaoLivro(CheckListLivros &CLL){
    int opcao;
    while(true){
        cout << "Cadastrar Livro        (0)" << endl;
        cout << "Pesquisar Livro        (1)" << endl;
        cout << "Remover   Livro        (2)" << endl;
        cout << "Listar    Livros       (3)" << endl;
        cout << "Voltar               (any)" << endl;

        cin >> opcao;

        if(opcao == 0){
            setDadosLivro(CLL);
        }
        else if(opcao == 1){
            pesquisarLivro(CLL);
        }
        else if(opcao == 2){
            removerDadosLivro(CLL);
        }
        else if(opcao == 3){
            listarLivro(CLL);
        }
        else{
            break;
        }
    }
}
void opcaoFilme(CheckListFilmes &CLF){
    int opcao;
    while(true){
        cout << "Cadastrar Filme        (0)" << endl;
        cout << "Pesquisar Filme        (1)" << endl;
        cout << "Remover   Filme        (2)" << endl;
        cout << "Listar    Filmes       (3)" << endl;
        cout << "Voltar               (any)" << endl;

        cin >> opcao;

        if(opcao == 0){
            setDadosFilme(CLF);
        }
        else if(opcao == 1){
            pesquisarFilme(CLF);
        }
        else if(opcao == 2){
            removerDadosFilme(CLF);
        }
        else if(opcao == 3){
            listarFilmes(CLF);
        }
        else{
            break;
        }
    }
}

void principaisOpcoes(CheckListFilmes &CLF, CheckListJogos CLJ, CheckListLivros CLL){
    while (true){
        cout << "Selecione uma das opcoes:     " << endl;
        cout << "Filmes                     (1)" << endl;
        cout << "Jogos                      (2)" << endl;
        cout << "Livros                     (3)" << endl;    
        cout << "Sair                     (any)" << endl;

        cin >> opcao;

        if(opcao == 1){
            opcaoFilme(CLF);
        }
        else if(opcao == 2){
            opcaoJogo(CLJ);
        }
        else if(opcao == 3){
            opcaoLivro(CLL);
        }
        else{
           break;
        }
    }
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    CheckListFilmes CLF;
    CheckListLivros CLL;
    CheckListJogos  CLJ;

    principaisOpcoes(CLF, CLJ, CLL);
    return a.exec();
}
