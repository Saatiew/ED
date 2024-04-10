#include <iostream>
#include <locale>

using namespace std;

/*
3. Crie uma estrutura chamada Endereco que armazene os
campos rua, cidade e CEP. Em seguida, crie um typedef para
Endereco chamado TipoEndereco. Crie um programa que solicite
ao usuário que insira informações de endereço e as armazene
em uma variável do tipo TipoEndereco.
*/

struct endereco
{
    string rua;
    string city;
    string cep;
};

typedef endereco TipoEndereco;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    TipoEndereco infos;

    cout << "Preencha as infomações" << endl;
    cout << "________________" << endl << endl;

    cout << "Digite o nome da cidade: ";
    getline(cin, infos.city);

    cout << "Digite o nome da rua: ";
    getline(cin, infos.rua);

    cout << "Digite o CEP: ";
    cin >> infos.cep;

    cout << "-----------------------------" << endl;
    cout << "Cidade: " << infos.city << endl;
    cout << "Rua: " << infos.rua << endl;
    cout << "CEP: " << infos.cep << endl;

    return 0;

}
