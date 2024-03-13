#include <iostream>
#include <locale>

using namespace std;

/*Faça um programa em C++ para ler 20 números e armazenar em um vetor.
Após a leitura total dos 20 números, o algoritmo deve escrever esses 20
números lidos na ordem inversa.*/


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tamanho = 20;
    int vet[tamanho];

    cout << "Digite os 20 números:" << endl;
    for (int i = 0; i < tamanho; ++i)
    {
        cout << "Número " << i + 1 << ": ";
        cin >> vet[i];
    }

    cout << "Números na ordem inversa:" << endl;
    for (int i = tamanho - 1; i >= 0; --i)
    {
        cout << vet[i] << " " << endl;
    }

    return 0;
}
