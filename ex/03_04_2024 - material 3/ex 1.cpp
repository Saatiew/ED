#include <iostream>
#include <locale>

using namespace std;

/* 1- Criar um programa que registre informa��es de v�rios
pacientes, incluindo nome, idade e um sintoma espec�fico. O
programa deve permitir a entrada de dados para m�ltiplos
pacientes at� que o usu�rio decida parar.
*/

struct dads
{
    string nome;
    int idade;
    string si;

};

int main()
{
    setlocale(LC_ALL, "portuguese");


  string continuar;

  do{
    dads pac;
    cout << "Digite seu nome: ";
    getline(cin, pac.nome);

    cout << "Digite sua idade: ";
    cin >> pac.idade;

    cin.ignore();

    cout << "Descreva os sintomas: ";
    getline(cin, pac.si);

    cout << "_______________" << endl;

    cout << "Nome: " << pac.nome << endl;
    cout << "Idade: " << pac.idade << endl;
    cout << "Sintomas: " << pac.si << endl;

    cin.ignore();

    cout << "Deseja cadastrar outro paciente? (Responda como Sim ou N�o) ";
    cin >> continuar;
    cin.ignore();
      }

      while(continuar == 's' || continuar == 'S');

    return 0;
}
