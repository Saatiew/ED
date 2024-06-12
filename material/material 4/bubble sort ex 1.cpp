#include <iostream>
#include <locale>
#include <stdlib.h>
#include <string>

#define TAM 5

using namespace std;

void imprimeVet(int vet[])
{
    int i;
    cout << endl;
    for(int i = 0; i < TAM ; i++)
    {
        cout << " | " << vet[i] << " | ";
    }
}

void bubblesort(int vet[TAM])
{
    int x, y, aux;

    for(x = 0; x < TAM; x++)
    {
        for (y = x + 1; y < TAM; y++)
        {
            if (vet[x] > vet[y])
            {
                aux = vet[x];
                vet[x] = vet[y];
                vet[y] = aux;
            }
        }
    }


}


int main()
{
    int vet[TAM] = {10, 9, 8, 7, 6};


    cout << endl;

    bubblesort(vet);
    imprimeVet(vet);

    return 0;
}
