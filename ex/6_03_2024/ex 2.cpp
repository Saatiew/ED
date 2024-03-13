#include <iostream>
#include <locale>

using namespace std;

/*Escreva um programa em C++ que permita a leitura das notas de uma
turma de 20 alunos. Calcular a média da turma e contar quantos alunos
obtiveram nota acima desta média calculada. Escrever a média da turma
e o resultado da contagem.*/


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tamanhoTurma = 20;
    float notas[tamanhoTurma];
    float somaNotas = 0;

    cout << "Digite as notas dos alunos:" << endl;
    for (int i = 0; i < tamanhoTurma; ++i)
    {
        cout << "Nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        somaNotas += notas[i];
    }

    float mediaTurma = somaNotas / tamanhoTurma;
    cout << "A média da turma é: " << mediaTurma << endl;


    int contadorAcimaMedia = 0;
    for (int i = 0; i < tamanhoTurma; ++i)
    {
        if (notas[i] > mediaTurma)
        {
            contadorAcimaMedia++;
        }
    }

    cout << "Número de alunos com nota acima da média: " << contadorAcimaMedia << endl;

    return 0;
}
