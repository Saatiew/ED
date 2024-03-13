#include <iostream>
#include <locale>

using namespace std;

/*Fa�a um programa em C++ para ler 20 n�meros e armazenar em um vetor.
Ap�s a leitura total dos 20 n�meros, o algoritmo deve escrever esses 20
n�meros lidos na ordem inversa.*/


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tamanho = 20;
    int vet[tamanho];

    cout << "Digite os 20 n�meros:" << endl;
    for (int i = 0; i < tamanho; ++i)
    {
        cout << "N�mero " << i + 1 << ": ";
        cin >> vet[i];
    }

    cout << "N�meros na ordem inversa:" << endl;
    for (int i = tamanho - 1; i >= 0; --i)
    {
        cout << vet[i] << " " << endl;
    }

    return 0;
}
