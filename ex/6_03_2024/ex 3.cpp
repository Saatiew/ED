#include <iostream>
#include <locale>

using namespace std;

/*Ler um vetor A de 10 n�meros. Ap�s, ler mais um n�mero e guardar em
uma vari�vel X. Armazenar em um vetor M o resultado de cada
elemento de A multiplicado pelo valor X. Logo ap�s, imprimir o vetor M.*/


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tamanho = 10;
    int vetorA[tamanho];
    int vetorM[tamanho];
    int valorX;

    cout << "Digite os n�meros do vetor A:" << endl;
    for (int i = 0; i < tamanho; ++i)
    {
        cout << "N� " << i + 1 << ": ";
        cin >> vetorA[i];
    }

    cout << "Digite o valor de X: ";
    cin >> valorX;

    for (int i = 0; i < tamanho; ++i)
    {
        vetorM[i] = vetorA[i] * valorX;
    }

    cout << "Vetor M:" << endl;

    for (int i = 0; i < tamanho; ++i)
    {
        cout << vetorM[i] << " " << endl;
    }

    return 0;
}
