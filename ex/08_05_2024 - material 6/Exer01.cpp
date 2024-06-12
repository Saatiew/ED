#include <iostream>
#include <stack>
#include <locale>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    stack <string> pilha;
    string item;
    int opcao;

    do{

        cout << "\n--------------------------\n";
        cout << "Selecione a opção:" << endl;
        cout << "0 - Sair." << endl;
        cout << "1 - Inserir um elemento na pilha." << endl;
        cout << "2 - Remover o elemento do topo da pilha." << endl;
        cout << "3 - Verificar o elemento do topo da pilha sem removê-lo." << endl;
        cout << "4 - Verificar se a pilha está vazia." << endl;
        cout << "5 - Exibir o tamanho da pilha." << endl;

        cout << "--------------------------\n\n";

        cin >> opcao;

        switch(opcao){

            case 1:

                cout << "\n----- Inserção de elementos -----\n";
                cout << "Digite o elemento a ser inserido: " << endl;

                cin.ignore();

                getline(cin, item);

                pilha.push(item);

            break;


            case 2:

                cout << "\n----- Remoção de elementos -----\n";
                cout << "Elemento a ser removido: " << pilha.top() << endl;

                pilha.pop();

                cout << "\nElemento Removido!\n";

            break;


            case 3:

                cout << "\n----- Elemento do topo -----\n";
                cout << "Elemento do topo no momento: " << pilha.top() << endl;

            break;


            case 4:

                cout << "\n----- Completidão da pilha -----\n";
                cout << "A pilha está vazia? : " << (pilha.empty() ? "Sim" : "Não") << endl;

            break;


            case 5:

                cout << "\n----- Tamanho -----\n";
                cout << "Tamanho da pilha: " << (pilha.size()) << endl;

            break;


            case 0:

                cout << "\n----- Programa Finalizado! -----\n";

            break;


            default:

                cout << "\n----- Opção Inexistente -----\n";

            break;

        }


    }while(opcao != 0);

}
