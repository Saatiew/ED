#include <iostream>
#include <queue>
#include <locale>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Portuguese");

    queue<string> filaAtend;
    string item;
    int opcao;

    do
    {
        cout << "Selecione alguma op��o abaixo: " << endl;
        cout << "-------------------------------" << endl;
        cout << "0 - Sair" << endl;
        cout << "1 - Inserir o nome do cliente" << endl;
        cout << "2 - Atender pr�ximo cliente" << endl;
        cout << "3 - Exibir lista de espera" << endl;
        cout << "--------------------------------" << endl;

        cin >> opcao;
        cin.ignore();


         switch(opcao)
        {
            case 0:
                cout << "Programa encerrado!";
                break;

            case 1:
                cout << "Digite o nome do cliente: ";
                getline(cin, item);
                filaAtend.push(item);

            break;
            case 2: // O programa deve remover o pr�ximo cliente da fila e
                //exibir uma mensagem com o nome do cliente que est� sendo atendido.

                if(!filaAtend.empty())
                {
                    cout << "Atentendo cliente " << filaAtend.front() << endl;
                    filaAtend.pop();
                }
            break;

            case 3: // O programa deve exibir a lista de clientes que est�o aguardando na fila, na ordem em que foram inseridos.
                if( !filaAtend.empty())
                {
                    cout << "Lista de espera: " << endl;
                    queue<string> tempqueue = filaAtend;

                    while (!tempqueue.empty())
                    {
                        cout << tempqueue.front() << endl;
                        tempqueue.pop();
                    }
                }
                break;
            default:
                cout << "N�mero inv�lido!";
        }

    }
    while(opcao != 0);
}
