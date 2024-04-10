#include <iostream>
#include <locale>

using namespace std;

/*
2. Suponha que voc� est� desenvolvendo um programa para armazenar
informa��es sobre animais em um zool�gico. Crie uma estrutura chamada
Animal que deve armazenar as seguintes informa��es sobre cada animal:
� Nome do animal (string)
� Esp�cie do animal (string)
� Idade do animal (int)
� Peso do animal em kg (float)
Em seguida, crie um typedef para uma lista de animais chamada ListaAnimais,
que deve ser um vetor de 10 elementos do tipo Animal.
Por fim, crie um programa que pede ao usu�rio para digitar os dados de 10
animais e armazena esses dados em uma vari�vel do tipo ListaAnimais.
Ao final, o programa deve exibir os dados de cada um dos 10 animais na tela.
*/

struct Animal{
     string nome_animal;
     string especie;
     int idade;
     float peso;
};

typedef Animal ListaAnimais[10];

int main()
{
    setlocale(LC_ALL, "Portuguese");
    ListaAnimais animal;

    for(int i = 0; i < 10; i++)
    {
        cout << "Digite o nome do animal " << i+1 << " : ";
        getline(cin, animal[i].nome_animal);

        cout << "Digite a especie da criatura " << i+1 << " : ";
        getline(cin, animal[i].especie);

        cout << "Digite a idade do bicho " << i+1 << " : ";
        cin >> animal[i].idade;
        cin.ignore();

        cout << "Digite o peso da besta(em kg) " << i+1 << " : ";
        cin >> animal[i].peso;
        cin.ignore();
    }

    cout << "Lista dos animais" << endl;
    cout << "__________________________" << endl << endl;

    for(int i = 0; i < 10; i++)
    {
        cout << "Animal N� " << i+1 << endl;
        cout << "__________________________" << endl << endl;
        cout << "Nome: " << animal[i].nome_animal << endl;
        cout << "Esp�cie: " << animal[i].especie << endl;
        cout << "Idade: " << animal[i].idade << " anos " << endl;
        cout << "Peso: " << animal[i].peso << " Kg" << endl;

    }
    return 0;
}
