#include <iostream>
#include <locale>

using namespace std;

/*Fa�a um programa em C++ para ler e armazenar em um vetor a temperatura
m�dia de todos os dias do ano. Calcular e escrever:
a) Menor temperatura do ano
b) Maior temperatura do ano
c) Temperatura m�dia anual
d) O n�mero de dias no ano em que a temperatura foi inferior a m�dia
anual*/


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int dias = 3, Menor = 0, Maior = 0;
    float temp[dias];
    float somaT;

    cout << "Digite a temp do primeiro dia:" << endl;
    for (int i = 0; i < dias; ++i)
    {
        cout << "Temp do dia " << i + 1 << ": ";
        cin >> temp[i];
        somaT += temp[i];


    Menor = temp[0];
    Maior = temp[0];

     if(temp[i] < Menor)
     {

          Menor = temp[i];

     }

      if(temp[i] > Maior)
      {

          Maior = temp[i];

      }
    }
    float media = somaT / dias;

    int contadorAbaixo = 0;
    for (int i = 0; i < dias; ++i)
     {
        if (temp[i] < media)
        {
            contadorAbaixo++;
        }
     }

    cout << "Maior temperatura: " << Maior << endl;
    cout << "Menor temperatura: " << Menor << endl;
    cout << "Temperatura m�dia anual: " << media << endl;
    cout << "N�mero de dias com temp abaixo da m�dia: " << contadorAbaixo << endl;

    return 0;
}
