#include <iostream>
#include <locale>

using namespace std;
/*
2- Desenvolver um programa que registre detalhes de livros em
uma biblioteca, como t�tulo, autor e ano de publica��o. O
programa deve continuar solicitando informa��es at� que um
t�tulo de livro espec�fico seja inserido.
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

       cout << "Digite o T�tulo do livro (sair p/ encerrar): " << endl;
       getline(cin, bib.titulo);
       if(bib.titulo != livro_specific)
       {
           cout << "Digite o nome do Autor do livro: " << endl;
           getline(cin, bib.autor);

           cout << "Digite o ano de publica��o: " << endl;
           cin >> bib.anop;

           cin.ignore();

       }


    }
      while (bib.titulo != livro_specific);



   return 0;




}
