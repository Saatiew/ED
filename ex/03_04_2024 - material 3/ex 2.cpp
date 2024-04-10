#include <iostream>
#include <string>
#include <locale>

using namespace std;

/*2- Desenvolver um programa que registre detalhes de livros em
uma biblioteca, como t�tulo, autor e ano de publica��o. O
programa deve continuar solicitando informa��es at� que um
t�tulo de livro espec�fico seja inserido.
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

    cout << "Digite o t�tulo do livro (digite 'sair' p/ encerrar): ";
    getline(cin, livro.nomelivro);

     while(livro.nomelivro != titEsp)
    {
       cout << "Digite o nome do Autor: ";
       getline(cin, livro.autor);

       cout << "Digite o ano de publica��o: ";
       cin >> livro.anopub;

       cin.ignore();

       cout << "____________" << endl << endl;
       cout << "Registro dos Livros" << endl << endl;
       cout << "____________" << endl << endl;

       cout << "T�tulo: " << livro.nomelivro << endl;
       cout << "Autor: " << livro.autor << endl;
       cout << "Ano de publica��o: " << livro.anopub << endl << endl;

       cout << "Digite o t�tulo do pr�ximo livro ('sair' para encerrar): ";
       getline(cin, livro.nomelivro);


    }

    cout << "Cadastro encerrado";

    return 0;

}
