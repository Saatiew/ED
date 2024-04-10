#include <iostream>
#include <string>
#include <locale>

using namespace std;

/*2- Desenvolver um programa que registre detalhes de livros em
uma biblioteca, como título, autor e ano de publicação. O
programa deve continuar solicitando informações até que um
título de livro específico seja inserido.
*/

struct bib
{
    string nomelivro;
    string autor;
    int anopub;
};


int main()
{
    setlocale(LC_ALL, "Portuguese");

    string titEsp = "sair";

    bib livro;

    cout << "Digite o título do livro (digite 'sair' p/ encerrar): ";
    getline(cin, livro.nomelivro);

     while(livro.nomelivro != titEsp)
    {
       cout << "Digite o nome do Autor: ";
       getline(cin, livro.autor);

       cout << "Digite o ano de publicação: ";
       cin >> livro.anopub;

       cin.ignore();

       cout << "____________" << endl << endl;
       cout << "Registro dos Livros" << endl << endl;
       cout << "____________" << endl << endl;

       cout << "Título: " << livro.nomelivro << endl;
       cout << "Autor: " << livro.autor << endl;
       cout << "Ano de publicação: " << livro.anopub << endl << endl;

       cout << "Digite o título do próximo livro ('sair' para encerrar): ";
       getline(cin, livro.nomelivro);


    }

    cout << "Cadastro encerrado";

    return 0;

}
