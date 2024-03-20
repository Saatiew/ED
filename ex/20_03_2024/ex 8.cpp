#include <iostream>
#include <locale>

using namespace std;

/* 8. Escreva um programa em C++ que crie um array de 5 inteiros, preencha-o
com valores fornecidos pelo usuário e, em seguida, calcule a média dos
valores usando ponteiros.
Dica: para calcular a média, some todos os valores do array e divida o
resultado pelo número de elementos no array.
*/


int main()
{
    setlocale(LC_ALL, "Portuguese");
    float media, soma = 0;
    int raia[5];
    int* ptr = &raia[0];

    cout << "Digite os números: " << endl;

    for(int i = 0; i < 5; i++)
    {
        cin >> raia[i];

    }

    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << endl;
        soma += *ptr;
        ptr++;
    }
    media = soma / 5;

    cout << "A média é: " << media << endl;

    return 0;
}
