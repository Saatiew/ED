#include <iostream>
#include <locale>
#define TAM 10

using namespace std;

/* • Faça um programa em c++ que cadastre 10 números, ordeneos e em seguida encontre e mostre:
– O menor número e quantas vezes ele aparece no vetor;
– O maior número e quantas vezes ele aparece no vetor.
*/


void impVetor(int vetor[])
{
    cout << endl;
    for (int i = 0; i < TAM; i++)
    {
        cout << " |" << vetor[i] << "| ";
    }
    cout << endl;
}

void selSort(int vetor[TAM])
{
    int posicaoMenorValor, aux;

    for(int i = 0; i < TAM - 1; i++)
    {
         posicaoMenorValor = i;

        for(int j = i + 1; j < TAM; j++)
            {
                if(vetor[j] < vetor[posicaoMenorValor])
                {
                    posicaoMenorValor = j;
                }
        }

        if (posicaoMenorValor != i)
        {
            aux = vetor[i];
            vetor[i] = vetor[posicaoMenorValor];
            vetor[posicaoMenorValor] = aux;
        }
    }
}

void encontrarMenorMaior(int vetor[TAM], int &menor, int &maior, int &contMenor, int &contMaior)
{
    menor = vetor[0];
    maior = vetor[0];
    contMenor = 1;
    contMaior = 1;

    for(int i = 1; i < TAM; i++)
    {
        if(vetor[i] == menor)
        {
            contMenor++;
        }
            else if(vetor[i] < menor)
             {
                menor = vetor[i];
                contMenor = 1;
             }

        if(vetor[i] == maior)
            {
                contMaior++;
            }
            else if(vetor[i] > maior)
                {
                        maior = vetor[i];
                        contMaior = 1;
                }
    }
}

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int vetor[TAM];
    int menor, maior, contMenor, contMaior;

    cout << "Digite 10 numeros:" << endl;
    for (int i = 0; i < TAM; i++)
    {
        cin >> vetor[i];
    }

    cout << "Vetor antes da ordenação:";
    impVetor(vetor);
    selSort(vetor);
    cout << "Vetor após a ordenação:";
    impVetor(vetor);

    encontrarMenorMaior(vetor, menor, maior, contMenor, contMaior);

    cout << "Menor numero: " << menor << ", aparece " << contMenor << " vez(es)." << endl;
    cout << "Maior numero: " << maior << ", aparece " << contMaior << " vez(es)." << endl;
}
