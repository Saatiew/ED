#include <iostream>
#include <vector>
#include <locale>

using namespace std;

/*
5. Crie uma enumera��o chamada Cores para representar cores
b�sicas (por exemplo, vermelho, verde, azul). Em seguida, crie
um typedef para Cores chamado TipoCor. Crie um programa que
permita ao usu�rio escolher uma cor usando o typedef e exiba a
cor escolhida na tela.
*/


typedef enum{VERMELHO, PRETO, ROXO} Cores; // apelido para cores
typedef Cores TipoCor;

int main()
{
     setlocale(LC_ALL, "Portuguese");

    TipoCor choosen;
    int choice;

    cout << "Escolha uma cor (Vermelho, Preto ou Roxo): ";
    cin >> choice;

    switch (choice)
    {
        case 1: choosen = VERMELHO;
        break;

        case 2: choosen = PRETO;
        break;

        case 3: choosen = ROXO;
        break;

        default: cout << "N�mero inv�lido.";
        break;
        return 1;


    }

     switch(choosen)
     {
         case VERMELHO:
             cout << "Sua escolha �: VERMELHO";
         break;
         case PRETO:
             cout << "Sua escolha �: PRETO";
         break;
         case ROXO:
             cout << "Sua escolha �: ROXO";
         break;

     }
  return 0;


}
