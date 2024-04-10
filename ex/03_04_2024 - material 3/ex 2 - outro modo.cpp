#include <iostream>
#include <locale>

using namespace std;
/*
2- Desenvolver um programa que registre detalhes de livros em
uma biblioteca, como título, autor e ano de publicação. O
programa deve continuar solicitando informações até que um
título de livro específico seja inserido.
*/

struct bisteca
{
    string titulo;
    string autor;
    int anop;


};

int main()
{
   setlocale(LC_ALL, "Portuguese");

   bisteca bib;
   string livro_specific = "sair";

   do
   {
       cout << "Registro de Livros" << endl;
       cout << "------------------------" << endl << endl;

       cout << "Digite o Título do livro (sair p/ encerrar): " << endl;
       getline(cin, bib.titulo);
       if(bib.titulo != livro_specific)
       {
           cout << "Digite o nome do Autor do livro: " << endl;
           getline(cin, bib.autor);

           cout << "Digite o ano de publicação: " << endl;
           cin >> bib.anop;

           cin.ignore();

       }


    }
      while (bib.titulo != livro_specific);



   return 0;




}
