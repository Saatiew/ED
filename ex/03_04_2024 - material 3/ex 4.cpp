#include <iostream>
#include <locale>

using namespace std;

/*
4 - Criar um programa para registrar o desempenho de
estudantes em uma disciplina, incluindo nome do estudante,
nota final e se ele foi aprovado ou reprovado. O programa deve
permitir a inserção de dados para vários estudantes até que o
usuário escolha encerrar. Utilize vetor.
*/

struct desempenho
{
    string nome;
    float notafinal;
    bool aprovacao;
};



int main()
{
   setlocale(LC_ALL, "Portuguese");

   desempenho aluno;

   string continuar;

   cout << "Tabela de registro dos alunos em determinada disciplina" << endl;
   cout << "________________________________________" << endl;

   do
   {
       cout << "Digite o nome do estudante: ";
       getline(cin, aluno.nome);

       cout << "Nota final(de 0 a 10): ";
       cin >> aluno.notafinal;

       if(aluno.notafinal < 0 || aluno.notafinal > 10)
       {
           cout << "Nota inválida" << endl;
           cin >> aluno.notafinal;
           cin.ignore();
       }

       cout << "Resultado final: ";
       if(aluno.aprovacao = aluno.notafinal >= 6.0)
       {
           cout << " Aprovado!!" << endl;

       } else {
           cout << "Reprovado :(" << endl;
       }
        cin.ignore();

       cout << "Deseja registrar outro aluno?(S/N) : ";
       getline(cin, continuar);

   }
   while(continuar == "s" || continuar == "S");

   return 0;



}
