#include <iostream>
#include <locale>

using namespace std;

/*Escreva um programa em C++ que permita a leitura dos nomes de 10
pessoas e armaze os nomes lidos em um vetor. Após isto, o algoritmo
deve permitir a leitura de mais 1 nome qualquer de pessoa e depois
escrever a mensagem ACHEI, se o nome estiver entre os 10 nomes lidos
anteriormente (guardados no vetor), ou NÃO ACHEI caso contrário.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tamanho = 3;
    string nomes[tamanho];

    cout << "Digite 10 nomes:" << endl;
    for (int i = 0; i < tamanho; ++i)
    {
        cout << "Nome " << i+1 << " - ";
        getline(cin, nomes[i]);
    }

    string nomeBusca;
    cout << "Digite o nome que deseja buscar: ";
    getline(cin, nomeBusca);

    bool encontrado = false;
    for (int i = 0; i < tamanho; ++i)
    {
        if (nomeBusca == nomes[i])
        {
            encontrado = true;
            break;
        }
    }

    if (encontrado)
    {
        cout << "ACHEI" << endl;
    }
    else
    {
        cout << "NÃO ACHEI" << endl;
    }

    return 0;
}
