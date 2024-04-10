#include <iostream>
#include <locale>
#include <vector>

using namespace std;
/*
4. Crie um typedef para um vetor de inteiros chamado
VetorInteiros. Em seguida, crie um programa que declare e
inicialize um vetor de 5 inteiros usando o typedef e exiba os
valores na tela.
*/
typedef vector<int> VetorInteiros;

int main()
{
    VetorInteiros vet = {1 , 2 , 3 , 4 , 5 };

    cout << "Valor dos inteiros: ";
    for(int i = 0; i < vet.size() ; i++)
    {
        cout << vet[i];
    }
    return 0;
}
