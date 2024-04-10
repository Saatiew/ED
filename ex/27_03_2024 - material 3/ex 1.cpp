#include <iostream>
#include <locale>

using namespace std;

/* 1. Crie uma estrutura chamada pessoa que seja capaz de
armazenar o nome, o endereço, o CPF e a idade de 5
pessoas.
*/

typedef struct
{
    string nome;
    string address;
    int idade;
    string cpf;
} Anomalia;

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int qtd = 5;
  Anomalia pessoa[qtd];
   for (int i = 0; i < qtd; i++)
   {
     cout << "Digite o nome da entidade anomálica "<< i+1 << " : " << endl;
     getline(cin, pessoa[i].nome);

     cout << "Digite o endereço para o invocarmos "<< i+1 << " : " << endl;
     getline(cin, pessoa[i].address);

     cout << "Digite o cpf " << i+1 << " : " << endl;
     getline(cin, pessoa[i].cpf);

     cout << "Digite a idade " << i+1 << " : " << endl;
     cin >> pessoa[i].idade;

     cin.ignore();

    }
    cout << "Cadastro das pessoas" << endl;
    cout << "______________________" << endl;

    for(int i = 0; i < qtd; i++)
    {
        cout << "Pessoa " << i+1 << ": " << endl;

        cout << "Nome: " << pessoa[i].nome << endl;
        cout << "Endereço: " << pessoa[i].address << endl;
        cout << "CPF: " << pessoa[i].cpf << endl;
        cout << "Idade: " << pessoa[i].idade << endl;
    }

    return 0;

}
