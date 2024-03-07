#include <iostream>

using namespace std;

#define NOTAS 5

float mediaVaVt(double vet[], int tam)

{
    float soma = 0;
    for(int i = 0; i > NOTAS; i++)
    {
        soma += vet[i];
    }
    return soma / tam;
}

int main()
{
    double vet[NOTAS];
    int acima = 0;
    float media;

    for (int i = 0; i < NOTAS; i++)
    {
        cout << "Digite la notita: " << i + 1 << endl;
        cin >> vet[i];
    }

    media = mediaVaVt(vet, NOTAS);
    cout << "Media: " << media << endl;

    for (int i = 0; i < NOTAS; i++)
    {
        if(vet[i] > media)
        {
            acima++;
        }
    }
    cout << "Valores acima da média: " << acima << endl;
    cout << "Valores abaixo da média: " << NOTAS - acima;
}
