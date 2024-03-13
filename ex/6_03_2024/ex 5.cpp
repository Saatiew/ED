#include <iostream>
#include <locale>
#include <vector>

using namespace std;

/*Faça um programa em C++ para ler um valor N qualquer (que será o
tamanho dos vetores). Após, ler dois vetores A e B (de tamanho N cada um)
e depois armazenar em um terceiro vetor Soma a soma dos elementos do
vetor A com os do vetor B (respeitando as mesmas posições) e escrever o
vetor Soma.*/


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tamanho;

    cout << "Digite o tamanho dos vetores: ";
    cin >> tamanho;

    vector<int> vetorA(tamanho);
    vector<int> vetorB(tamanho);
    vector<int> vetorSoma(tamanho);

    cout << "Digite os elementos do vetor A:" << endl;
    for (int i = 0; i < tamanho; ++i)
    {
        cout << "A[" << i << "]: ";
        cin >> vetorA[i];
    }

    cout << "Digite os elementos do vetor B:" << endl;
    for (int i = 0; i < tamanho; ++i)
    {
        cout << "B[" << i << "]: ";
        cin >> vetorB[i];
    }


    for (int i = 0; i < tamanho; ++i)
    {
        vetorSoma[i] = vetorA[i] + vetorB[i];
    }


    cout << "Vetor Soma:" << endl;

    for (int i = 0; i < tamanho; ++i)
    {
        cout << vetorSoma[i] << " " << endl;
    }

    return 0;
}
