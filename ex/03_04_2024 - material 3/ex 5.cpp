#include <iostream>
#include <locale>

using namespace std;

/* 5 - Implementar um programa para registrar pedidos em um
restaurante, coletando informa��es como o nome do prato,
quantidade e pre�o total. O programa deve continuar recebendo
novos pedidos at� que um valor espec�fico seja inserido como
pre�o.
*/

struct pedidos
{
    string nomedop;
    int quantidade;
    float valor_final;

};

int main()
{
    pedidos rest;
    string continuar;
    float valor_espeficico = 0.0;

    do {
    cout << "Digite o nome do prato: ";
    getline(cin, rest.nomedop);

    cout << "Quantidade: ";
    cin >> rest.quantidade;
    cin.ignore();

    cout << "Valor final: ";
    cin >> rest.valor_final;
    cin.ignore();

    if(rest.valor_final == valor_espeficico)
        {
            cout << "Valor final igual ao valor do prato espec�fico. Saindo do programa..."<< endl;
            break;
            cin.ignore();
        }

    cout << "Pedidos registrados" << endl;
    cout << "---------------------------------" << endl;
    cout << "Nome do prato: " << rest.nomedop << endl;
    cout << "Quantidade: " << rest.quantidade << endl;
    cout << "Valor final: " << rest.valor_final << endl;

     cout << "Deseja fazer outro pedido? (S/N) ";
     getline(cin, continuar);

    } while(continuar == "s" || continuar == "S");
    return 0;



}
